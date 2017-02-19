#pragma once
#include "SimpleElement.hpp"

class Circle : public SimpleElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Circle(float cx, float cy, float r, size_t N = 60) {
		float STEP = PI / N * 2;
		for (float f = 0.f; f < PI * 2; f += STEP)
			m_data.push_back(Point(r*cosf(f) + cx, r*sinf(f) + cy));
	}
};