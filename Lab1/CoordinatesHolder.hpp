#pragma once
#include "Point.hpp"
#include <qlist.h>
#include <random>

enum class Structure { Center, Random, Circle, SquaredCircle };

class CoordinatesHolder {
private:
	QList<Point> m_coords;
	size_t n;
	Structure str;

	const float PI = 3.14159265359f;
public:
	void setN(size_t N) { 
		n = N;
		switch (str) {
			case Structure::Center: setCenter(); break;
			case Structure::Random: setRandom(); break;
			case Structure::Circle: setCircle(); break;
			case Structure::SquaredCircle: setSquaredCircle();
		}
	}
	void setCenter() {
		str = Structure::Center;
		m_coords.clear();
		for (int i = 0; i < n; i++)
			m_coords.push_back(Point());
	}
	void setRandom() {
		str = Structure::Random;
		m_coords.clear();
		std::mt19937_64 g(std::random_device().operator()());
		std::uniform_real_distribution<float> d(-1.f, 1.f);
		for (size_t i = 0; i < n; i++)
			m_coords.push_back(Point(d(g), d(g)));	
	}
	void setCircle() {
		str = Structure::Circle;
		m_coords.clear();
		float STEP = PI * 2.f / n;
		for (float f = 0.f; f < PI * 2.f; f += STEP)
			m_coords.push_back(Point(cosf(f), sinf(f)));
		while (m_coords.size() > n)
			m_coords.pop_back();
	}
	void setSquaredCircle() {
		str = Structure::SquaredCircle;
		m_coords.clear();
		size_t s = n / 8;
		float step = 2.f / s;
		float start = -1.f;
		float end = start + 2.f;
		for (float f = start; f < end; f += step) {
			m_coords.push_back(Point(f, -1.f));
			m_coords.push_back(Point(f, +1.f));
			m_coords.push_back(Point(-1.f, f));
			m_coords.push_back(Point(+1.f, f));
		}
		step = PI / (n - s * 4) * 2;
		for (float f = 0.f; f < PI * 2; f += step)
			m_coords.push_back(Point(cosf(f), sinf(f)));
	}

	QList<Point>& operator*() {
		return m_coords;
	}
};