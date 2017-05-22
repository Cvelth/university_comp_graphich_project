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
	explicit Lab6Primitive(bool isFilled = false) {
		VertexConnectionType type;
		if (isFilled) type = VertexConnectionType::Polygon;
		else type = VertexConnectionType::LineLoop;
		//Bottom
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(0, 1, 0), Point(0, 0, 0)}),
			Point(0, 0, -1), type));
		//Back
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(1, 0, 1), Point(0, 1, 1), Point(0, 1, 0)}),
			Point(1, 1, 0), type));
		//Left
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(0, 0, 0), Point(0, 0, 0.5), Point(0.5, 0, 1), Point(1, 0, 1)}),
			Point(0, -1, 0), type));
		//Right
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0), Point(0, 1, 0), Point(0, 1, 1), Point(0, 0.5, 1),  Point(0, 0, 0.5)}),
			Point(-1, 0, 0), type));
		//Front
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0.5), Point(0, 0.5, 1), Point(0.5, 0, 1)}),
			Point(-1, -1, 1), type));
		//Top
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 1, 1), Point(1, 0, 1), Point(0.5, 0, 1), Point(0, 0.5, 1)}),
			Point(0, 0, 1), type));
	}
};