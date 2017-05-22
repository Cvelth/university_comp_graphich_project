#pragma once
#include <qopenglfunctions.h>
#include <qopenglwidget.h>
#include <qmatrix4x4.h>
#include "ComplexNormalElement.hpp"
#include <CoordinatesHolder.hpp>

class AbstractMovementHolder;
class Plane;

struct Color {
public:
	float r, g, b, a;

	Color(float r = 1.f, float g = 1.f, float b = 1.f, float a = 1.f)
		: r(r), g(g), b(b), a(a) {
	}
	Color(size_t r = 255, size_t g = 255, size_t b = 255,
		  size_t a = 255, size_t scale_max = 255)
		: r(float(r) / scale_max), g(float(g) / scale_max), 
		  b(float(b) / scale_max), a(float(a) / scale_max) {
	}
};

struct UniformLocations {
	GLint
		projectionMatrixLoc,

		lookAtMatrixLoc,
		cameraLoc,
		lightLoc,

		translationMatrixLoc,
		rotationSceneMatrixLoc,
		rotationElementMatrixLoc,
		scalingSceneMatrixLoc,
		scalingElementMatrixLoc,

		drawingColorLoc;
};

class CompilationOrLinkingError {};

class Canvas : public QOpenGLWidget, protected QOpenGLFunctions {
	Q_OBJECT

private:
	Color foreground, background;

	GLuint *buffers, *buffers2;
	CoordinatesHolder coordinates;
	ComplexElement *element;
	ComplexNormalElement *elementN, *elementB;
	
	bool isMouseLocked;
	bool useNormals;

	QMatrix4x4 rotation;	
protected:
	Point cameraPos;
	Point lookPoint;
	Point upVector;

	Point light;

	GLuint currentProgram;
	UniformLocations *currentLocs;

	GLuint programLab1;
	UniformLocations locs1;
	GLuint programLab7;
	UniformLocations locs7;

	AbstractMovementHolder* insertedMovementHolder;
	bool isMovementHolderInserted;

	bool isLab6;

protected:
	virtual void initializeGL() override;
	virtual void resizeGL(int w, int h) override;
	virtual void paintGL() override;

	virtual void mousePressEvent(QMouseEvent* e) override;
	virtual void mouseMoveEvent(QMouseEvent* e) override;
	virtual bool eventFilter(QObject *obj, QEvent *event) override;
	
	virtual GLuint* generateBuffers(size_t n);
	virtual void linkPrograms();
	GLuint makeProgram(std::initializer_list<GLuint> shaders);
	GLuint readShader(GLenum type, std::string fileName);
	std::string readFile(std::string fileName);
	UniformLocations getShaderUniformLocs(GLuint program);

	virtual void sendData();
	virtual void sendElement(SimpleElement* el);
	virtual void sendElement(SimpleElement* el, GLuint buffer);
	virtual void sendElement(SimpleNormalElement* el, GLuint buffer);
	virtual void sendElement(ComplexElement* el);
	virtual void sendElement(GLuint* buffers, ComplexNormalElement* el);

	virtual void drawElement(SimpleElement* el, GLuint buffer, float x = 0.f, float y = 0.f);
	virtual void drawElement(SimpleElement* el, float x = 0.f, float y = 0.f);
	virtual void drawElement(ComplexElement* el, float x = 0.f, float y = 0.f);
	virtual void drawElement(ComplexElement* el, CoordinatesHolder c);
	virtual void drawElement(ComplexNormalElement* el, float x = 0.f, float y = 0.f);
	virtual void drawElement(ComplexNormalElement* el, CoordinatesHolder c);

	virtual void insertMovementHolder(AbstractMovementHolder* mh);
	virtual void removeMovementHolder();

	virtual bool checkCullFacing(Plane& p);
	virtual bool checkCullFacing(Point& p);
public:
	Canvas();
	virtual ~Canvas();

public slots :
	void createSquareCircle();
	void createLab2Primitive(float a, float b, float r, size_t n);
	void createLab3Primitive(size_t n);
	void createLab4LinearPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya);
	void createLab4ColumnPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya);
	void createLab4SectorPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya);
	void createLab5Primitive(AbstractMovementHolder* mh);
	void createLab6Primitive();
	void createLab7Primitive();

	void setForegroundR(size_t i);
	void setForegroundG(size_t i);
	void setForegroundB(size_t i);
	void setForegroundA(size_t i);
	void setBackgroundR(size_t i);
	void setBackgroundG(size_t i);
	void setBackgroundB(size_t i);
	void setBackgroundA(size_t i);

	void setSize(size_t i);
	void setScale(size_t i);
	void setNumber(size_t i);
	void setElementAngle(size_t x, size_t y, size_t z);
	void setSceneAngle(size_t i);
	void setLineWidth(size_t i);

	void randomSlot();
	void circleSlot();
	void centerSlot();

	void resetCamera();
	void resetLight();
	void lookAtNull();

	void updateLookAt();
	void updateLight();
	void updateForegroundColor();
	void updateBackgroundColor();

	void update();
};