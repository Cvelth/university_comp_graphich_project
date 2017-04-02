#pragma once

class Point {
private:
	float m_x, m_y, m_z;
	const float POINT_SIZE = 0.05f;

public:
	Point(float x = 0.f, float y = 0.f, float z = 0.f) : m_x(x), m_y(y), m_z(z) {};
	float x() const { return m_x; }
	float y() const { return m_y; }
	float z() const { return m_z; }
	void x(float x) { m_x = x; }
	void y(float y) { m_y = y; }
	void z(float z) { m_y = z; }

	bool operator==(const Point& p) const;
	Point operator+(const Point& p) const;
	Point operator+=(const Point& p);
	Point operator-(const Point& p) const;
	Point operator-=(const Point& p);
	Point operator=(const Point& p);

	Point operator*(float f) const;
	Point operator/(float f) const;

	Point operator*(Point p) const;

	Point operator-() const;
	
	static Point center(Point, Point);
	float length() const;
	Point normalize() const;

	static size_t dimentions();
};