#include "SimpleElement.hpp"
#include <qopengl.h>

GLenum _enumSwitch(VertexConnectionType e) {
	switch (e) {
		case VertexConnectionType::Points: return GL_POINTS;
		case VertexConnectionType::Lines: return GL_LINES;
		case VertexConnectionType::LineStrip: return GL_LINE_STRIP;
		case VertexConnectionType::LineLoop: return GL_LINE_LOOP;
		case VertexConnectionType::Triangles: return GL_TRIANGLES;
		case VertexConnectionType::TriangleStrip: return GL_TRIANGLE_STRIP;
		case VertexConnectionType::TriangleFan: return GL_TRIANGLE_FAN;
		case VertexConnectionType::Quads: return GL_QUADS;
		case VertexConnectionType::QuadStrip: return GL_QUAD_STRIP;
		case VertexConnectionType::Polygon: return GL_POLYGON;
		default: return 0;
	}
}
