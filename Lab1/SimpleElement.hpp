#pragma once
#include "AbstractElement.hpp"
#include "Point.hpp"
#include <qlist.h>

typedef unsigned int GLenum;

enum class VertexConnectionType {
	Points, Lines, LineStrip, LineLoop, Triangles, TriangleStrip, TriangleFan, Quads, QuadStrip, Polygon
};
GLenum _enumSwitch(VertexConnectionType e);

class SimpleElement : public AbstractElement {
protected:
	QList<Point> m_data;
	VertexConnectionType m_connection;
public:
	SimpleElement(VertexConnectionType connection = VertexConnectionType::LineLoop) : m_connection(connection) {}
	virtual size_t getSize() const override {
		return m_data.size() * Point::dimentions();
	}
	virtual size_t getNumber() const override {
		return m_data.size();
	}
	virtual size_t getElementsNumber() const override {
		return 1;
	}
	virtual GLenum getConnection() const {
		return _enumSwitch(m_connection);
	}

	QList<Point>& operator*() {
		return m_data;
	}
};