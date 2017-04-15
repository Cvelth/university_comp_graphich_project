#pragma once
#include "SimpleElement.hpp"
#include "ComplexElement.hpp"

class Lab2Element : public SimpleElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab2Element(float a, float b, float r, size_t n, size_t acc = 30) {
		float STEP = PI / acc;
		for (float t = 0.f; t < n * PI * 2.f; t += STEP)
			m_data.push_back(Point(r * (1.f + cosf(a * t) + sinf(b * t) * sinf(b * t)) * cosf(t),
								   r * (1.f + cosf(a * t) + sinf(b * t) * sinf(b * t)) * sinf(t)));
	}
};

class Lab2Primitive : public ComplexElement {
public:
	explicit Lab2Primitive(float a, float b, float r, size_t n, size_t acc = 120) {
		m_data.push_back(new Lab2Element(a, b, r, n, acc));
	}
};