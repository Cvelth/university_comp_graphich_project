#pragma once
#include "SimpleElement.hpp"
#include "Timer.hpp"
#include <QSlider>

class AbstractMovementHolder : public QObject {
	Q_OBJECT
public:
	AbstractMovementHolder(QSlider* speed, float pos) : m_pos(pos), m_speed(speed) {
		t = new Timer(1000.f / 60.f);
		QObject::connect(t, &Timer::timeout, this, &AbstractMovementHolder::step);
	}
	~AbstractMovementHolder() {
		delete t;
	}
	virtual void step() {
		m_pos += float(m_speed->value()) / 1000.f;
		emit update();
	}
	virtual Point getPos() abstract;

	void run(bool b) {
		t->runButton(b);
	}
signals:
	void update();
protected:
	float m_pos;
	QSlider* m_speed;

	Timer* t;
};

class MovementHolderL2 : public AbstractMovementHolder {
public:
	explicit MovementHolderL2(QSlider* speed, float a = 3.f, float b = 3.f) : AbstractMovementHolder(speed, 0.f), m_a(a), m_b(b) {

	}
	virtual Point getPos() override {
		return Point((1.f + cosf(m_a * m_pos) + sinf(m_b * m_pos) * sinf(m_b * m_pos)) * cosf(m_pos),
					 (1.f + cosf(m_a * m_pos) + sinf(m_b * m_pos) * sinf(m_b * m_pos)) * sinf(m_pos));
	}
	void changeQs(float a, float b) {
		m_a = a; m_b = b;
	}
protected:
	float m_a, m_b;
};