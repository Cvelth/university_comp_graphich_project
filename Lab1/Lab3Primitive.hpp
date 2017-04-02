#pragma once
#include "SimpleElement.hpp"
#include "ComplexElement.hpp"

class Lab3ElementV : public SimpleElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab3ElementV(float t1, float STEP) {
		for (float t2 = 0.f; t2 < PI * 2.f; t2 += STEP)
			m_data.push_back(Point(sinf(t1)*cosf(t2), cosf(t1), sinf(t1)*sinf(t2)));
	}
};

class Lab3ElementH : public SimpleElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab3ElementH(float t1, float STEP) {
		for (float t2 = 0.f; t2 < PI * 2.f; t2 += STEP)
			m_data.push_back(Point(sinf(t2)*cosf(t1), cosf(t2), sinf(t2)*sinf(t1)));
	}
};

class Lab3Primitive : public ComplexElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab3Primitive(size_t acc = 120) {
		float STEP = PI / acc;
		for (float t1 = 0.f; t1 < PI * 2.f; t1 += STEP) {
			m_data.push_back(Lab3ElementV(t1, STEP));
			m_data.push_back(Lab3ElementH(t1, STEP));
		}
	}
};