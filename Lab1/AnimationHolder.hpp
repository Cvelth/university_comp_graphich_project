#pragma once
#include <QtWidgets>
#include "ui_Lab1.h"
#include "Timer.hpp"

class Data {
private:
	float pos;
	float speedQ;
	float min, max;

protected:

public:
	Data(float p = 0.f, float sq = 1.f, float max = 0.f, float min = 1.f) 
		: pos(p), speedQ(sq), min(min), max(max) { }

	size_t step(size_t speed) {
		if ((pos + speedQ * speed >= max && speedQ > 0) || (pos + speedQ * speed <= min && speedQ < 0))
			speedQ = -speedQ;
		pos += speedQ * speed;
		return pos;
	}
};

class AnimationHolder : public QObject {
	Q_OBJECT

private:
	Ui::Lab1Class *ui;
	Data number, width, size, eAngle, sAngle, scale;
	Data BR, BG, BB, FR, FG, FB, FA;
	Data PA, PB, PR, PN;

	Timer *t;

public:
	AnimationHolder(Ui::Lab1Class *ui) : ui(ui) {
		t = new Timer(1000.f / 60);
		connect(ui->runButton, &QPushButton::clicked, t, &Timer::runButton);
		connect(t, &Timer::timeout, this, &AnimationHolder::step);

		const float TYPICAL_Q = 0.2f;

		number = Data(ui->Number->value(), TYPICAL_Q, ui->Number->maximum(), ui->Number->minimum());
		width = Data(ui->Width->value(), TYPICAL_Q, ui->Width->maximum(), ui->Width->minimum());
		size = Data(ui->Size->value(), TYPICAL_Q, ui->Size->maximum(), ui->Size->minimum());
		eAngle = Data(ui->ElementAngle->value(), TYPICAL_Q, ui->ElementAngle->maximum(), ui->ElementAngle->minimum());
		sAngle = Data(ui->SceneAngle->value(), TYPICAL_Q, ui->SceneAngle->maximum(), ui->SceneAngle->minimum());
		scale = Data(ui->Scale->value(), TYPICAL_Q, ui->Scale->maximum(), ui->Scale->minimum());

		BR = Data(ui->BR->value(), TYPICAL_Q, ui->BR->maximum(), ui->BR->minimum());
		BG = Data(ui->BG->value(), TYPICAL_Q, ui->BG->maximum(), ui->BG->minimum());
		BB = Data(ui->BB->value(), TYPICAL_Q, ui->BB->maximum(), ui->BB->minimum());
		FR = Data(ui->FR->value(), TYPICAL_Q, ui->FR->maximum(), ui->FR->minimum());
		FG = Data(ui->FG->value(), TYPICAL_Q, ui->FG->maximum(), ui->FG->minimum());
		FB = Data(ui->FB->value(), TYPICAL_Q, ui->FB->maximum(), ui->FB->minimum());
		FA = Data(ui->FA->value(), TYPICAL_Q, ui->FA->maximum(), ui->FA->minimum());

		PA = Data(ui->PA->value(), TYPICAL_Q, ui->PA->maximum(), ui->PA->minimum());
		PB = Data(ui->PB->value(), TYPICAL_Q, ui->PB->maximum(), ui->PB->minimum());
		PR = Data(ui->PR->value(), TYPICAL_Q, ui->PR->maximum(), ui->PR->minimum());
		PN = Data(ui->PN->value(), TYPICAL_Q / 10.f, ui->PN->maximum(), ui->PN->minimum());
	};

public slots:
	void step() {
		size_t speed = ui->Speed->value();
		if (ui->addNumber->isChecked())
			ui->Number->setValue(number.step(speed));
		if (ui->addWidth->isChecked())
			ui->Width->setValue(width.step(speed));
		if (ui->addSize->isChecked())
			ui->Size->setValue(size.step(speed));
		if (ui->addScale->isChecked())
			ui->Scale->setValue(scale.step(speed));
		if (ui->addEAngle->isChecked())
			ui->ElementAngle->setValue(eAngle.step(speed));
		if (ui->addSAngle->isChecked())
			ui->SceneAngle->setValue(sAngle.step(speed));
		if (ui->addBR->isChecked())
			ui->BR->setValue(BR.step(speed));
		if (ui->addBG->isChecked())
			ui->BG->setValue(BG.step(speed));
		if (ui->addBB->isChecked())
			ui->BB->setValue(BB.step(speed));
		if (ui->addFR->isChecked())
			ui->FR->setValue(FR.step(speed));
		if (ui->addFG->isChecked())
			ui->FG->setValue(FG.step(speed));
		if (ui->addFB->isChecked())
			ui->FB->setValue(FB.step(speed));
		if (ui->addFA->isChecked())
			ui->FA->setValue(FA.step(speed));

		if (ui->addPA->isChecked())
			ui->PA->setValue(PA.step(speed));
		if (ui->addPB->isChecked())
			ui->PB->setValue(PB.step(speed));
		if (ui->addPR->isChecked())
			ui->PR->setValue(PR.step(speed));
		if (ui->addPN->isChecked())
			ui->PN->setValue(PN.step(speed));
	}
};