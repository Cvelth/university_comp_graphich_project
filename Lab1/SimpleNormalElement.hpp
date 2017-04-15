#pragma once
#include "SimpleElement.hpp"

class SimpleNormalElement : public SimpleElement {
protected:
	Point m_normal;
public:
	SimpleNormalElement(VertexConnectionType connection = VertexConnectionType::LineLoop) 
		: SimpleElement(connection) {}
	Point& normal() {
		return m_normal;
	}
};