#pragma once
#include "ComplexElement.hpp"

template<typename t>
t max(t a, t b) {
	return (a < b) ? b : a;
}
template<typename t>
t abs(t a) {
	return (a < 0) ? -a : a;
}
template<typename t>
t maxabs(t a, t b) {
	return max(abs(a), abs(b));
}

class X_Axis : public SimpleElement {
public:
	explicit X_Axis() {
		m_data.push_back(Point(-10, 0));
		m_data.push_back(Point(+10, 0));
		m_connection = VertexConnectionType::LineStrip;
	}
};
class Y_Axis : public SimpleElement {
public:
	explicit Y_Axis() {
		m_data.push_back(Point(0, -10));
		m_data.push_back(Point(0, +10));
		m_connection = VertexConnectionType::LineStrip;
	}
};

class Lab4LinearElementX : public SimpleElement {
public:
	explicit Lab4LinearElementX(float a, float b, size_t n) {
		float mod =  0.1f;
		float STEP = (b - a) / n;
		for (float t = a; t < b; t += STEP)
			m_data.push_back(Point(t * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * cosf(t)));
		m_connection = VertexConnectionType::LineStrip;
	}
};
class Lab4LinearElementY : public SimpleElement {
public:
	explicit Lab4LinearElementY(float a, float b, size_t n) {
		float mod = 0.1f;
		float STEP = (b - a) / n;
		for (float t = a; t < b; t += STEP)
			m_data.push_back(Point(t * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * sinf(t)));
		m_connection = VertexConnectionType::LineStrip;
	}
};

class Lab4LinearPrimitive : public ComplexElement {
public:
	explicit Lab4LinearPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya) {
		if (x) m_data.push_back(new Lab4LinearElementX(a, b, n));
		if (y) m_data.push_back(new Lab4LinearElementY(a, b, n));
		if (xa) m_data.push_back(new X_Axis());
		if (ya) m_data.push_back(new Y_Axis());
	}
};

class Lab4ColumnElementX : public SimpleElement {
public:
	explicit Lab4ColumnElementX(float a, float b, size_t n) {
		float mod = 0.1f;
		float STEP = (b - a) / n;
		for (float t = a; t < b; t += STEP) {
			m_data.push_back(Point(t * mod, 0.f));
			m_data.push_back(Point(t * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * cosf(t)));
			m_data.push_back(Point((t + STEP) * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * cosf(t)));
			m_data.push_back(Point((t + STEP) * mod, 0.f));
		}
		m_connection = VertexConnectionType::Quads;
	}
};
class Lab4ColumnElementY : public SimpleElement {
public:
	explicit Lab4ColumnElementY(float a, float b, size_t n) {
		float mod = 0.1f;
		float STEP = (b - a) / n;
		for (float t = a; t < b; t += STEP) {
			m_data.push_back(Point(t * mod, 0.f));
			m_data.push_back(Point(t * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * sinf(t)));
			m_data.push_back(Point((t + STEP) * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * sinf(t)));
			m_data.push_back(Point((t + STEP) * mod, 0.f));
		}
		m_connection = VertexConnectionType::Quads;
	}
};

class Lab4ColumnPrimitive : public ComplexElement {
public:
	explicit Lab4ColumnPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya) {
		if (x) m_data.push_back(new Lab4ColumnElementX(a, b, float(n) / 10.f));
		if (y) m_data.push_back(new Lab4ColumnElementY(a, b, float(n) / 10.f));
		if (xa) m_data.push_back(new X_Axis());
		if (ya) m_data.push_back(new Y_Axis());
	}
};

float x_func(float t) {
	return 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * cosf(t) - 0.1f;
}

class Lab4SectorElementX : public SimpleElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab4SectorElementX(float a, float b, size_t n) {
		float STEP = (b - a) / n;
		float max = 0.f;
		for (float t = a; t < b; t += STEP + 0.001f)
			max += abs(x_func(t));
		max /= PI;
		float f = 0;
		for (float t = a; t < b;) {
			m_data.push_back(Point(0, 0.f));
			f += abs(x_func(t)) / max;
			m_data.push_back(Point(cosf(f), sinf(f)));
			t += STEP;
			f += abs(x_func(t)) / max;
			m_data.push_back(Point(cosf(f), sinf(f)));
			t += 0.001f;
		}
		m_connection = VertexConnectionType::Triangles;
	}
};
class Lab4SectorElementY : public SimpleElement {
public:
	explicit Lab4SectorElementY(float a, float b, size_t n) {
		float mod = 0.1f;
		float STEP = (b - a) / n;
		for (float t = a; t < b; t += STEP) {
			m_data.push_back(Point(t * mod, 0.f));
			m_data.push_back(Point(t * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * sinf(t)));
			m_data.push_back(Point((t + STEP) * mod, 1.f + cosf(3.f * t) + sinf(3.f * t) * sinf(3.f * t) * sinf(t)));
			m_data.push_back(Point((t + STEP) * mod, 0.f));
		}
		m_connection = VertexConnectionType::Triangles;
	}
};

class Lab4SectorPrimitive : public ComplexElement {
private:
	const float PI = 3.14159265359f;
public:
	explicit Lab4SectorPrimitive(float a, float b, size_t n, bool x, bool y, bool xa, bool ya) {
		if (x) m_data.push_back(new Lab4SectorElementX(a, b, float(n) / 2.f));
		if (y) m_data.push_back(new Lab4SectorElementY(a, b, float(n) / 2.f));
		if (xa) m_data.push_back(new X_Axis());
		if (ya) m_data.push_back(new Y_Axis());
	}
};