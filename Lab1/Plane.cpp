#include "Plane.hpp"
#include <QMatrix4x4>

Point operator!(QVector4D& v) {
	return Point(v.x(), v.y(), v.z());
}

Plane operator*(const QMatrix4x4 &m, const Plane &p) {
	auto t = Plane(!(m * p.m_t), !(m * p.m_s), !(m * p.m_f));
	return t;
}

Plane operator*(const Plane &p, const QMatrix4x4 &m) {
	return Plane(!(p.m_t * m), !(p.m_s * m), !(p.m_f * m));
}
