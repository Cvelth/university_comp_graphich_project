#include "Lab1.h"

Lab1::Lab1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	c = new Canvas();
	connectGUI();

	ui.horizontalLayout->addWidget(c);
	ui.splitter->setStretchFactor(0, 4);
	ui.splitter->setStretchFactor(1, 0);

	ui.BR->setValue(25);
	ui.BG->setValue(0);
	ui.BB->setValue(50);

	ui.FR->setValue(250);
	ui.FG->setValue(50);
	ui.FB->setValue(50);

	ui.Angle->setValue(0);
	ui.Number->setValue(50);
	ui.Size->setValue(50);
}

void Lab1::connectGUI() {
	connect(ui.BR, &QSlider::valueChanged, c, &Canvas::setBackgroundR);
	connect(ui.BG, &QSlider::valueChanged, c, &Canvas::setBackgroundG);
	connect(ui.BB, &QSlider::valueChanged, c, &Canvas::setBackgroundB);

	connect(ui.FR, &QSlider::valueChanged, c, &Canvas::setForegroundR);
	connect(ui.FG, &QSlider::valueChanged, c, &Canvas::setForegroundG);
	connect(ui.FB, &QSlider::valueChanged, c, &Canvas::setForegroundB);
	connect(ui.FA, &QSlider::valueChanged, c, &Canvas::setForegroundA);

	connect(ui.Angle, &QSlider::valueChanged, c, &Canvas::setAngle);
	connect(ui.Size, &QSlider::valueChanged, c, &Canvas::setSize);
	connect(ui.Number, &QSlider::valueChanged, c, &Canvas::setNumber);
}