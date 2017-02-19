#pragma once
#include <qopenglfunctions.h>
#include <qopenglwidget.h>
#include <qmatrix4x4.h>

#include "SquareCircle.h"
#include <CoordinatesHolder.hpp>

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

class CompilationOrLinkingError {};

class Canvas : public QOpenGLWidget, protected QOpenGLFunctions {
	Q_OBJECT

private:
	Color foreground, background;
	float size, scale, lineWidth;
	int elementAngle, sceneAngle;

	GLuint* buffers;	
	ComplexElement *element;

	CoordinatesHolder coordinates;

protected:
	float aspectRatio;
	QMatrix4x4 projection;

	GLuint program;

protected:
	virtual void initializeGL() override;
	virtual void resizeGL(int w, int h) override;
	virtual void paintGL() override;

	virtual GLuint* generateBuffers(size_t n);
	virtual void linkPrograms();
	GLuint makeProgram(std::initializer_list<GLuint> shaders);
	GLuint readShader(GLenum type, std::string fileName);
	std::string readFile(std::string fileName);

	virtual void sendData();
	virtual void sendElement(SimpleElement* el);
	virtual void sendElement(SimpleElement* el, GLuint buffer);
	virtual void sendElement(ComplexElement* el);

	virtual void drawElements();
	virtual void drawElement(SimpleElement* el, GLuint buffer, float x = 0.f, float y = 0.f);
	virtual void drawElement(SimpleElement* el, float x = 0.f, float y = 0.f);
	virtual void drawElement(ComplexElement* el, float x = 0.f, float y = 0.f);
	virtual void drawElement(ComplexElement* el, CoordinatesHolder c);

	virtual void sendProjectMatrix();
	virtual void sendRotateSceneMatrix(float angle, float x, float y, float z);
	virtual void sendTranslateMatrix(float x, float y);
	virtual void sendRotateElemMatrix(float angle, float x, float y, float z);
	virtual void sendScaleElementMatrix(float scale);
	virtual void sendScaleElementMatrix(float x, float y, float z);
	virtual void sendSceneScaleMatrix(float scale);
	virtual void sendSceneScaleMatrix(float x, float y, float z);
	virtual void sendForegroundColor(Color c);

public:
	Canvas();
	virtual ~Canvas();

public slots :
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
	void setElementAngle(size_t i);
	void setSceneAngle(size_t i);
	void setLineWidth(size_t i);

	void randomSlot();
	void circleSlot();
	void csSlot();
	void centerSlot();
};