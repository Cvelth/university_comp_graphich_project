#pragma once
#include <QtWidgets>
#include "ui_Lab1.h"

class Canvas;
class AnimationHolder;
class AbstractMovementHolder;

class Lab1 : public QWidget
{
	Q_OBJECT

public:
	Lab1(QWidget *parent = Q_NULLPTR);
	~Lab1();

protected:
	void connectGUI();

private:
	Ui::Lab1Class ui;
	Canvas *c;
	AnimationHolder *a;
	AbstractMovementHolder *m;

private slots:
	void eventSlot();
	void lab1Slot();
	void lab2Slot();
	void lab3Slot();
	void lab4Slot();
	void lab5Slot();

	void runMovementHolder(bool b);

public slots:
	void show();
};
