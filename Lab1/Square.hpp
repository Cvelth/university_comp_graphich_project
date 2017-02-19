#pragma once
#include "SimpleElement.hpp"

class Square : public SimpleElement {
public:
	explicit Square(float cx, float cy, float w, float h) {
		m_data.push_back(Point(cx - w / 2, cy - h / 2));
		m_data.push_back(Point(cx + w / 2, cy - h / 2));
		m_data.push_back(Point(cx + w / 2, cy + h / 2));
		m_data.push_back(Point(cx - w / 2, cy + h / 2));
	}
};