#include "Canvas.hpp"
#include <fstream>
#include "Lab2Primitive.hpp"
#include "Lab3Primitive.hpp"
#include "SquareCircle.h"
#include <qevent.h>

Canvas::Canvas() : foreground(1.f), background(1.f), element(nullptr), isMouseLocked(false) {
	buffers = new GLuint[1];
	resetCamera();
}

Canvas::~Canvas() {
	if (buffers) delete[] buffers;
	if (element) delete element;
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

	createSquareCircle();
}
void Canvas::resizeGL(int w, int h) {
	aspectRatio = float(w) / h;
	glViewport(0, 0, w, h);
	projection = QMatrix4x4();
	/*
	if (aspectRatio > 1.f)
		projection.ortho(-aspectRatio, +aspectRatio, 
						 -1.f, +1.f, -1.f, +1.f);
	else
		projection.ortho(-1.f, +1.f, -1.f / aspectRatio, 
						 +1.f / aspectRatio, -1.f, +1.f);
						 */
	projection.perspective(60, aspectRatio, 0.01f, 100.f);
}
void Canvas::paintGL() {
	glClearColor(background.r, background.g, background.b, background.a);
	glLineWidth(lineWidth);
	glClear(GL_COLOR_BUFFER_BIT);

	glUseProgram(program);
	drawElements();
}

void Canvas::mousePressEvent(QMouseEvent * e) {
	isMouseLocked = !isMouseLocked;
	setMouseTracking(isMouseLocked);
	if (isMouseLocked) {
		QCursor::setPos(mapToGlobal(QPoint(width() / 2, height() / 2)));
		setCursor(Qt::BlankCursor);
	} else
		setCursor(Qt::ArrowCursor);
}

void Canvas::mouseMoveEvent(QMouseEvent * e) {
	if (isMouseLocked) {
		float x = e->x() - width() / 2;
		float y = e->y() - height() / 2;
		lookPoint += lookPoint * upVector * x / height();
		lookPoint += upVector * lookPoint * Point(0, 0, 1) * y / height();
		QCursor::setPos(mapToGlobal(QPoint(width() / 2, height() / 2)));
		update();
	}
}

bool Canvas::eventFilter(QObject * obj, QEvent * event) {
	if (event->type() == QEvent::KeyPress) {
		switch (static_cast<QKeyEvent*>(event)->key()) {
			case Qt::Key::Key_Up:
			case Qt::Key::Key_W:
				cameraPos += lookPoint * 0.2f;
				break;
			case Qt::Key::Key_Down:
			case Qt::Key::Key_S:
				cameraPos -= lookPoint * 0.2f;
				break;
			case Qt::Key::Key_Left:
			case Qt::Key::Key_A:
				cameraPos -= lookPoint * upVector * 0.2f;
				break;
			case Qt::Key::Key_Right:
			case Qt::Key::Key_D:
				cameraPos += lookPoint * upVector * 0.2f;
				break;
			case Qt::Key_Shift:
			case Qt::Key::Key_E:
				cameraPos += upVector * 0.2f;
				break;
			case Qt::Key_Control:
			case Qt::Key::Key_Q:
				cameraPos -= upVector * 0.2f;
				break;
		}
		update();
		return true;
	} else if (event->type() == QEvent::Wheel && isMouseLocked) {
		if (static_cast<QWheelEvent*>(event)->delta() < 0)
			cameraPos -= lookPoint * 0.1f;
		else
			cameraPos += lookPoint * 0.1f;
		update();
		return true;
	}
	return QObject::eventFilter(obj, event);
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

	for (auto &shader : shaders)
		glAttachShader(program, shader);

	glLinkProgram(program);

	GLint isLinked;
	glGetProgramiv(program, GL_LINK_STATUS, &isLinked);
	if (!isLinked) {
		GLsizei len;
		glGetShaderiv(program, GL_INFO_LOG_LENGTH, &len);

		GLchar* log = new GLchar[len + 1];
		glGetProgramInfoLog(program, len, &len, log);
		std::string t = std::string(log);
		delete[] log;

		throw CompilationOrLinkingError();
	}

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

	GLint isCompiled;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &isCompiled);

	if (!isCompiled) {
		GLsizei len;
		glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &len);

		GLchar* log = new GLchar[len + 1];
		glGetShaderInfoLog(shader, len, &len, log);
		std::string t = std::string(log);
		delete[] log;

		throw CompilationOrLinkingError();
	}

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
		res[i++] = p.z();
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
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 3, 0);

	sendForegroundColor(foreground);
	sendProjectMatrix();
	sendLookAtMatrix();
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
	if (el) for (auto se : **el)
		drawElement(&se, buffers[i++], x, y);
}

void Canvas::drawElement(ComplexElement * el, CoordinatesHolder c) {
	for (auto p : *c)
		drawElement(el, p.x(), p.y());
}

QVector3D operator!(const Point& p) {
	return QVector3D(p.x(), p.y(), p.z());
}

void Canvas::sendProjectMatrix() {
	GLint projectionMatrix = glGetUniformLocation(program, "projectionMatrix");
	glUniformMatrix4fv(projectionMatrix, 1, GL_FALSE, projection.data());

}
void Canvas::sendLookAtMatrix() {
	GLint lookAtMatrix = glGetUniformLocation(program, "lookAtMatrix");
	QMatrix4x4 m; m.lookAt(!cameraPos, !(lookPoint + cameraPos), !upVector);
	glUniformMatrix4fv(lookAtMatrix, 1, GL_FALSE, m.data());

	GLint camera = glGetUniformLocation(program, "camera");
	glUniform3f(camera, cameraPos.x(), cameraPos.y(), cameraPos.z());

	GLint back = glGetUniformLocation(program, "background");
	glUniform3f(back, background.r, background.g, background.b);
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

void Canvas::createSquareCircle() {
	if (element) delete element;
	element = new SquareCircle(0.f, 0.f, 1.f, 90);
	sendData();
	update();
}
void Canvas::createLab2Primitive(float a, float b, float r, size_t n) {
	if (element) delete element;
	element = new Lab2Primitive(a, b, r, n);
	sendData();
	update();
}

void Canvas::createLab3Primitive(size_t n) {
	if (element) delete element;
	element = new Lab3Primitive(n);
	sendData();
	update();
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

void Canvas::resetCamera() {
	cameraPos = Point(0, 0, -2);
	lookPoint = Point(0, 0, 1);
	upVector = Point(0, 1, 0);
	update();
}

void Canvas::lookAtNull() {
	lookPoint = -cameraPos;
	update();
}
