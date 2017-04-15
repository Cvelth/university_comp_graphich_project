#include <Point.hpp>
#include <ctgmath>
#include <QVector4D.h>

bool Point::operator==(const Point& p) const {
	return fabs(m_x - p.m_x) < POINT_SIZE && fabs(m_y - p.m_y) < POINT_SIZE && fabs(m_z - p.m_z) < POINT_SIZE;
}

Point Point::operator+(const Point & p) const {
	return Point(m_x + p.m_x, m_y + p.m_y, m_z + p.m_z);
}

Point Point::operator+=(const Point & p) {
	m_x += p.m_x;
	m_y += p.m_y;
	m_z += p.m_z;
	return *this;
}

Point Point::operator-=(const Point & p) {
	m_x -= p.m_x;
	m_y -= p.m_y;
	m_z -= p.m_z;
	return *this;
}

Point Point::operator-(const Point & p) const {
	return Point(m_x - p.m_x, m_y - p.m_y, m_z - p.m_z);
}

Point Point::operator=(const Point & p) {
	return Point(m_x = p.m_x, m_y = p.m_y, m_z = p.m_z);
}

Point Point::operator*(float f) const {
	return Point(m_x * f, m_y * f, m_z * f);
}

Point Point::operator/(float f) const {
	return Point(m_x / f, m_y / f, m_z / f);
}

Point Point::operator*(Point p) const {
	return Point(m_y*p.m_z - m_z*p.m_y, m_z*p.m_x - m_x*p.m_z, m_x*p.m_y - m_y*p.m_x);
}

float Point::operator^(Point & p) const {
	return m_x * p.m_x + m_y * p.m_y + m_z * p.m_z;
}

Point Point::operator-() const {
	return Point(-m_x, -m_y, -m_z);
}

Point Point::center(Point a, Point b) {
	return Point((a.m_x + b.m_x) / 2, (a.m_y + b.m_y) / 2, (a.m_z + b.m_z) / 2);
}

float Point::length() const {
	return sqrtf(m_x*m_x + m_y*m_y + m_z*m_z);
}

Point Point::normalize() const {
	return Point(m_x / length(), m_y / length(), m_z / length());
}

size_t Point::dimentions() {
	return 3;
}

Point::operator QVector4D() {
	return QVector4D(m_x, m_y, m_z, 1.f);
}

Point::operator const QVector4D() const {
	return QVector4D(m_x, m_y, m_z, 1.f);
}
