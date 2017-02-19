#pragma once
#include <QtWidgets/QWidget>
#include "ui_Lab1.h"
#include "Canvas.hpp"

class Lab1 : public QWidget
{
	Q_OBJECT

public:
	Lab1(QWidget *parent = Q_NULLPTR);

protected:
	void connectGUI();

private:
	Ui::Lab1Class ui;
	Canvas *c;
};
