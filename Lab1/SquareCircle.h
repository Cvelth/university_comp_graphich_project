#pragma once
#include "ComplexElement.hpp"
#include "Circle.hpp"
#include "Square.hpp"

class SquareCircle : public ComplexElement {
public:
	explicit SquareCircle(float cx, float cy, float r, size_t N = 30) {
		m_data.push_back(Square(cx, cy, r * 2, r * 2));
		m_data.push_back(Circle(cx, cy, r, N));
	}
};