#pragma once
#include "Point.hpp"

class QMatrix4x4;

class Plane {
public:
	Plane(Point t, Point s, Point f) : m_f(f), m_s(s), m_t(t) {

	}
	inline Point first() const {
		return m_f;
	}
	inline Point second() const {
		return m_s;
	}
	inline Point third() const {
		return m_t;
	}

	inline Point getAverage() const {
		return (m_f + m_s + m_t) / 3.f;
	}

	inline Point getNormal() const {
		return (m_t - m_f) * (m_s - m_f);
	}

	inline Point normal() const {
		return getNormal().normalize();
	}

	friend Plane operator*(const QMatrix4x4&, const Plane&);
	friend Plane operator*(const Plane&, const QMatrix4x4&);
protected:
	Point m_f, m_s, m_t;
};