#include "Lab1.h"

Lab1::Lab1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	c = new Canvas();
	connectGUI();
	installEventFilter(c);

	ui.horizontalLayout->addWidget(c);
	ui.splitter->setStretchFactor(0, 4);
	ui.splitter->setStretchFactor(1, 0);

	ui.lPA->hide();		ui.PA->hide();	  ui.addPA->hide();
	ui.lPB->hide();		ui.PB->hide();	  ui.addPB->hide();
	ui.lPR->hide();		ui.PR->hide();	  ui.addPR->hide();
	ui.lPN->hide();		ui.PN->hide();	  ui.addPN->hide();
	
	ui.BR->setValue(25);
	ui.BG->setValue(0);
	ui.BB->setValue(50);

	ui.FR->setValue(250);
	ui.FG->setValue(50);
	ui.FB->setValue(50);
	ui.FA->setValue(255);

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
	connect(ui.lab1, &QRadioButton::clicked, this, &Lab1::lab1Slot);
	connect(ui.lab2, &QRadioButton::clicked, this, &Lab1::lab2Slot);
	connect(ui.lab3, &QRadioButton::clicked, this, &Lab1::lab3Slot);

	connect(ui.PA, &QSlider::valueChanged, this, &Lab1::eventSlot);
	connect(ui.PB, &QSlider::valueChanged, this, &Lab1::eventSlot);
	connect(ui.PR, &QSlider::valueChanged, this, &Lab1::eventSlot);
	connect(ui.PN, &QSlider::valueChanged, this, &Lab1::eventSlot);

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

	connect(ui.resetCamera, &QPushButton::clicked, c, &Canvas::resetCamera);
	connect(ui.lookAtNull, &QPushButton::clicked, c, &Canvas::lookAtNull);
}

void Lab1::lab1Slot() {
	ui.lPA->hide();
	ui.lPB->hide();
	ui.lPR->hide();
	ui.lPN->hide();

	ui.PA->hide();
	ui.PB->hide();
	ui.PR->hide();
	ui.PN->hide();

	ui.addPA->hide();
	ui.addPB->hide();
	ui.addPR->hide();
	ui.addPN->hide();

	c->createSquareCircle();
}

void Lab1::lab2Slot() {
	ui.lPA->show();
	ui.lPB->show();
	ui.lPR->show();
	ui.lPN->show();

	ui.PA->show();
	ui.PB->show();
	ui.PR->show();
	ui.PN->show();

	ui.addPA->show();
	ui.addPB->show();
	ui.addPR->show();
	ui.addPN->show();

	eventSlot();
}

void Lab1::lab3Slot() {
	ui.lPA->hide();
	ui.lPB->hide();
	ui.lPR->hide();
	ui.lPN->show();

	ui.PA->hide();
	ui.PB->hide();
	ui.PR->hide();
	ui.PN->show();

	ui.addPA->hide();
	ui.addPB->hide();
	ui.addPR->hide();
	ui.addPN->show();

	eventSlot();
}

void Lab1::eventSlot() {
	if (ui.lab1->isChecked()) {
		//Nothing to do.
		//Lab1 primitive is static.
	} else if (ui.lab2->isChecked()) {
		c->createLab2Primitive(float(ui.PA->value()) / 100.f,
							   float(ui.PB->value()) / 100.f,
							   float(ui.PR->value()) / 100.f,
							   ui.PN->value());
	} else if (ui.lab3->isChecked()) {
		c->createLab3Primitive(ui.PN->value() * 2);
	}
}