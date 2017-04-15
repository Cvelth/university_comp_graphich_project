#pragma once
#include "SimpleNormalElement.hpp"
#include "ComplexNormalElement.hpp"

class Lab6Element : public SimpleNormalElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab6Element(QList<Point>& v, Point& n, VertexConnectionType c) {
		m_data = v;
		m_normal = n;
		m_connection = c;
	}
};

class Lab6Primitive : public ComplexNormalElement {
public:
	explicit Lab6Primitive() {
		//Bottom
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(0, 1, 0), Point(0, 0, 0)}),
			Point(0, 0, -1), VertexConnectionType::LineLoop));
		//Back
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(1, 0, 1), Point(0, 1, 1), Point(0, 1, 0)}),
			Point(1, 1, 0), VertexConnectionType::LineLoop));
		//Left
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(0, 0, 0), Point(0, 0, 0.5), Point(0.5, 0, 1), Point(1, 0, 1)}),
			Point(0, -1, 0), VertexConnectionType::LineLoop));
		//Right
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0), Point(0, 1, 0), Point(0, 1, 1), Point(0, 0.5, 1),  Point(0, 0, 0.5)}),
			Point(-1, 0, 0), VertexConnectionType::LineLoop));
		//Front
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0.5), Point(0, 0.5, 1), Point(0.5, 0, 1)}),
			Point(-1, -1, 1), VertexConnectionType::LineLoop));
		//Top
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 1, 1), Point(1, 0, 1), Point(0.5, 0, 1), Point(0, 0.5, 1)}),
			Point(0, 0, 1), VertexConnectionType::LineLoop));
	}
};