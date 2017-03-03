#include "Canvas.hpp"
#include <fstream>

Canvas::Canvas() : foreground(1.f), background(1.f) {
	buffers = new GLuint[1];
	//element = new ComplexElement(Circle(0.f, 0.f, 0.5f));
	//element = new ComplexElement(Square(0.f, 0.f, 0.5f, 0.5f));
	element = new SquareCircle(0.f, 0.f, 1.f, 90);
}

Canvas::~Canvas() {
	delete[] buffers;
	delete element;
}

void Canvas::initializeGL() {
	initializeOpenGLFunctions();
	linkPrograms();

	glLineWidth(2.5f);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);

	glEnable(GL_POINT_SMOOTH);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);

	glEnable(GL_LINE_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);

	glEnable(GL_POLYGON_SMOOTH);
	glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);

	glEnableVertexAttribArray(0);

	sendData();
}
void Canvas::resizeGL(int w, int h) {
	aspectRatio = float(w) / h;
	glViewport(0, 0, w, h);
	projection = QMatrix4x4();
	if (aspectRatio > 1.f)
		projection.ortho(-aspectRatio, +aspectRatio, 
						 -1.f, +1.f, -1.f, +1.f);
	else
		projection.ortho(-1.f, +1.f, -1.f / aspectRatio, 
						 +1.f / aspectRatio, -1.f, +1.f);
}
void Canvas::paintGL() {
	glClearColor(background.r, background.g, background.b, background.a);
	glLineWidth(lineWidth);
	glClear(GL_COLOR_BUFFER_BIT);

	glUseProgram(program);
	drawElements();
}

GLuint* Canvas::generateBuffers(size_t n) {
	GLuint* b = new GLuint[n];
	glGenBuffers(n, b);
	return b;
}

void Canvas::linkPrograms() {
	GLuint f = readShader(GL_FRAGMENT_SHADER, "FragmentShader.glsl");
	GLuint v = readShader(GL_VERTEX_SHADER, "VertexShader.glsl");

	program = makeProgram({f, v});
}
GLuint Canvas::makeProgram(std::initializer_list<GLuint> shaders) {
	GLuint program = glCreateProgram();

	for (auto shader : shaders)
		glAttachShader(program, shader);

	glLinkProgram(program);

	GLint status;
	glGetProgramiv(program, GL_LINK_STATUS, &status);
	if (!status)
		throw CompilationOrLinkingError();

	return program;
}
GLuint Canvas::readShader(GLenum type, std::string fileName) {
	GLuint shader = glCreateShader(type);
	const GLchar* temp[1];
	std::string s;
	s = readFile(fileName);
	temp[0] = s.c_str();
	glShaderSource(shader, 1, temp, 0);
	glCompileShader(shader);

	GLint status;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &status);
	if (!status)
		throw CompilationOrLinkingError();

	return shader;
}
std::string Canvas::readFile(std::string fileName) {
	return std::string(
		std::istreambuf_iterator<char>(std::ifstream(fileName)),
		std::istreambuf_iterator<char>()
	);
}

void Canvas::sendData() {
	delete[] buffers;
	buffers = generateBuffers(element->getElementsNumber());
	sendElement(element);
}

void Canvas::sendElement(SimpleElement *el, GLuint buffer) {
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	float* res = new float[el->getSize()];
	size_t i = 0;
	for (Point p : **el) {
		res[i++] = p.x();
		res[i++] = p.y();
	}

	glBufferData(GL_ARRAY_BUFFER, sizeof(float) * el->getSize(),
				 res, GL_DYNAMIC_DRAW);
	delete[] res;
}

void Canvas::sendElement(SimpleElement *el) {
	sendElement(el, buffers[0]);
}

void Canvas::sendElement(ComplexElement *el) {
	size_t i = 0;
	for (auto se : **el)
		sendElement(&se, buffers[i++]);
}

void Canvas::drawElements() {
	drawElement(element, coordinates);	
}

void Canvas::drawElement(SimpleElement *el, GLuint buffer, float x, float y) {
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 0, 0);

	sendForegroundColor(foreground);
	sendProjectMatrix();
	sendRotateSceneMatrix(sceneAngle, 0.f, 0.f, 1.f);
	sendSceneScaleMatrix(scale);
	sendTranslateMatrix(x, y);
	sendRotateElemMatrix(elementAngle, 0.f, 0.f, 1.f);
	sendScaleElementMatrix(size);
	
	glDrawArrays(GL_LINE_LOOP, 0, el->getNumber());
}
void Canvas::drawElement(SimpleElement *el, float x, float y) {
	drawElement(el, buffers[0], x, y);
}

void Canvas::drawElement(ComplexElement * el, float x, float y) {
	size_t i = 0;
	for (auto se : **el)
		drawElement(&se, buffers[i++], x, y);
}

void Canvas::drawElement(ComplexElement * el, CoordinatesHolder c) {
	for (auto p : *c)
		drawElement(el, p.x(), p.y());
}

void Canvas::sendProjectMatrix() {
	GLint projectionMatrix = glGetUniformLocation(program, "projectionMatrix");
	glUniformMatrix4fv(projectionMatrix, 1, GL_FALSE, projection.data());

}
void Canvas::sendRotateSceneMatrix(float angle, float x, float y, float z) {
	GLint rotationSceneMatrix = glGetUniformLocation(program, "rotationSceneMatrix");
	QMatrix4x4 matrix;
	matrix.rotate(angle, x, y, z);
	glUniformMatrix4fv(rotationSceneMatrix, 1, GL_FALSE, matrix.data());

}
void Canvas::sendTranslateMatrix(float x, float y) {
	GLint translationMatrix = glGetUniformLocation(program, "translationMatrix");
	QMatrix4x4 matrix;
	matrix.translate(x, y);
	glUniformMatrix4fv(translationMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendRotateElemMatrix(float angle, float x, float y, float z) {
	GLint rotationElementMatrix = glGetUniformLocation(program, "rotationElementMatrix");
	QMatrix4x4 matrix;
	matrix.rotate(angle, x, y, z);
	glUniformMatrix4fv(rotationElementMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendScaleElementMatrix(float scale) {
	GLint scalingMatrix = glGetUniformLocation(program, "scalingElementMatrix");
	QMatrix4x4 matrix;
	matrix.scale(scale);
	glUniformMatrix4fv(scalingMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendScaleElementMatrix(float x, float y, float z) {
	GLint scalingMatrix = glGetUniformLocation(program, "scalingElementMatrix");
	QMatrix4x4 matrix;
	matrix.scale(x, y, z);
	glUniformMatrix4fv(scalingMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendSceneScaleMatrix(float scale) {
	GLint scalingMatrix = glGetUniformLocation(program, "scalingSceneMatrix");
	QMatrix4x4 matrix;
	matrix.scale(scale);
	glUniformMatrix4fv(scalingMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendSceneScaleMatrix(float x, float y, float z) {
	GLint scalingMatrix = glGetUniformLocation(program, "scalingSceneMatrix");
	QMatrix4x4 matrix;
	matrix.scale(x, y, z);
	glUniformMatrix4fv(scalingMatrix, 1, GL_FALSE, matrix.data());
}
void Canvas::sendForegroundColor(Color c) {
	GLint drawingColor = glGetUniformLocation(program, "drawingColor");
	glUniform4f(drawingColor, c.r, c.g, c.b, c.a);
}

void Canvas::setForegroundR(size_t i) {
	foreground.r = float(i) / 255;
	update();
}
void Canvas::setForegroundG(size_t i) {
	foreground.g = float(i) / 255;
	update();
}
void Canvas::setForegroundB(size_t i) {
	foreground.b = float(i) / 255;
	update();
}
void Canvas::setForegroundA(size_t i) {
	foreground.a = float(i) / 255;
	update();
}
void Canvas::setBackgroundR(size_t i) {
	background.r = float(i) / 255;
	update();
}
void Canvas::setBackgroundG(size_t i) {
	background.g = float(i) / 255;
	update();
}
void Canvas::setBackgroundB(size_t i) {
	background.b = float(i) / 255;
	update();
}
void Canvas::setBackgroundA(size_t i) {
	background.a = float(i) / 255;
	update();
}

void Canvas::setSize(size_t i) {
	size = float(i) / 1000;
	update();
}
void Canvas::setScale(size_t i) {
	scale = float(i) / 2000;
	update();
}
void Canvas::setElementAngle(size_t i) {
	elementAngle = i;
	update();
}
void Canvas::setSceneAngle(size_t i) {
	sceneAngle = i;
	update();
}
void Canvas::setLineWidth(size_t i) {
	lineWidth = float(i) / 100;
	update();
}

void Canvas::setNumber(size_t i) {
	coordinates.setN(i);
	update();
}
void Canvas::randomSlot() {
	coordinates.setRandom();
	update();
}
void Canvas::circleSlot() {
	coordinates.setCircle();
	update();
}
void Canvas::csSlot() {
	coordinates.setSquaredCircle();
	update();
}
void Canvas::centerSlot() {
	coordinates.setCenter();
	update();
}