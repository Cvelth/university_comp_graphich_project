#pragma once
#include <QtWidgets>
#include "ui_Lab1.h"
#include "Canvas.hpp"
#include "AnimationHolder.hpp"

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
};
