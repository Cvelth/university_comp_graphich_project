#pragma once
#include <qtimer.h>

class Timer : public QTimer {
	Q_OBJECT

protected:
	size_t m_timerStep;

public:
	Timer(size_t step = 5) : m_timerStep(step) {
		setInterval(m_timerStep);
	}

public slots:
	void runButton(bool b) {
		if (b)
			start();
		else
			stop();
	}
};