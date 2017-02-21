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

	ui.ElementAngle->setValue(0);
	ui.SceneAngle->setValue(0);
	ui.Number->setValue(1);
	ui.Size->setValue(750);
	ui.Scale->setValue(1500);
	ui.Width->setValue(200);

	ui.Speed->setValue(0);

	ui.centerButton->click();

	a = new AnimationHolder(&ui);
}

Lab1::~Lab1() {
	delete c;
	delete a;
}

void Lab1::connectGUI() {
	connect(ui.BR, &QSlider::valueChanged, c, &Canvas::setBackgroundR);
	connect(ui.BG, &QSlider::valueChanged, c, &Canvas::setBackgroundG);
	connect(ui.BB, &QSlider::valueChanged, c, &Canvas::setBackgroundB);

	connect(ui.FR, &QSlider::valueChanged, c, &Canvas::setForegroundR);
	connect(ui.FG, &QSlider::valueChanged, c, &Canvas::setForegroundG);
	connect(ui.FB, &QSlider::valueChanged, c, &Canvas::setForegroundB);
	connect(ui.FA, &QSlider::valueChanged, c, &Canvas::setForegroundA);

	connect(ui.ElementAngle, &QSlider::valueChanged, c, &Canvas::setElementAngle);
	connect(ui.SceneAngle, &QSlider::valueChanged, c, &Canvas::setSceneAngle);
	connect(ui.Size, &QSlider::valueChanged, c, &Canvas::setSize);
	connect(ui.Scale, &QSlider::valueChanged, c, &Canvas::setScale);
	connect(ui.Width, &QSlider::valueChanged, c, &Canvas::setLineWidth);

	connect(ui.Number, &QSlider::valueChanged, c, &Canvas::setNumber);
	connect(ui.randomButton, &QRadioButton::clicked, c, &Canvas::randomSlot);
	connect(ui.circleButton, &QRadioButton::clicked, c, &Canvas::circleSlot);
	connect(ui.centerButton, &QRadioButton::clicked, c, &Canvas::centerSlot);
}