#pragma once
#include "Lab6Primitive.hpp"

class Lab7Primitive : public ComplexNormalElement {
public:
	explicit Lab7Primitive() {
		//Bottom
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0), Point(1, 0, 0), Point(1, 1, 0), Point(0, 1, 0)}),
			Point(0, 0, -1), VertexConnectionType::Polygon));
		//Front
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 0, 0), Point(0, 0, 0), Point(0.5, 0.5, 1)}),
			Point(0, -1, 0.5), VertexConnectionType::Polygon));
		//Right
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(1, 1, 0), Point(1, 0, 0), Point(0.5, 0.5, 1)}),
			Point(1, 0, 0.5), VertexConnectionType::Polygon));
		//Back
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 1, 0), Point(1, 1, 0), Point(0.5, 0.5, 1)}),
			Point(0, 1, 0.5), VertexConnectionType::Polygon));
		//Left
		m_data.push_back(new Lab6Element(QList<Point>({
			Point(0, 0, 0), Point(0, 1, 0), Point(0.5, 0.5, 1)}),
			Point(-1, 0, 0.5), VertexConnectionType::Polygon));
	}
};