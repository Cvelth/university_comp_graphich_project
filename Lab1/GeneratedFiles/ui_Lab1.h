/********************************************************************************
** Form generated from reading UI file 'Lab1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB1_H
#define UI_LAB1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab1Class
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QSlider *Number;
    QSlider *Size;
    QLabel *label;
    QLabel *label_10;
    QLabel *label_6;
    QSlider *Angle;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QSlider *BR;
    QLabel *label_12;
    QLabel *label_13;
    QSlider *BG;
    QSlider *BB;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *FR;
    QLabel *label_4;
    QSlider *FG;
    QLabel *label_3;
    QSlider *FB;
    QLabel *label_7;
    QSlider *FA;

    void setupUi(QWidget *Lab1Class)
    {
        if (Lab1Class->objectName().isEmpty())
            Lab1Class->setObjectName(QStringLiteral("Lab1Class"));
        Lab1Class->resize(713, 533);
        horizontalLayout_2 = new QHBoxLayout(Lab1Class);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(Lab1Class);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setMinimumSize(QSize(695, 0));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(horizontalLayoutWidget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Number = new QSlider(groupBox_4);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setValue(99);
        Number->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Number, 1, 1, 1, 1);

        Size = new QSlider(groupBox_4);
        Size->setObjectName(QStringLiteral("Size"));
        Size->setValue(99);
        Size->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Size, 0, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);

        Angle = new QSlider(groupBox_4);
        Angle->setObjectName(QStringLiteral("Angle"));
        Angle->setMaximum(359);
        Angle->setValue(359);
        Angle->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Angle, 2, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        BR = new QSlider(groupBox_2);
        BR->setObjectName(QStringLiteral("BR"));
        BR->setMaximum(255);
        BR->setValue(255);
        BR->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BR, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        BG = new QSlider(groupBox_2);
        BG->setObjectName(QStringLiteral("BG"));
        BG->setMaximum(255);
        BG->setValue(255);
        BG->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BG, 1, 1, 1, 1);

        BB = new QSlider(groupBox_2);
        BB->setObjectName(QStringLiteral("BB"));
        BB->setMaximum(255);
        BB->setValue(255);
        BB->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BB, 2, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        FR = new QSlider(groupBox_3);
        FR->setObjectName(QStringLiteral("FR"));
        FR->setMaximum(255);
        FR->setValue(255);
        FR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FR, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        FG = new QSlider(groupBox_3);
        FG->setObjectName(QStringLiteral("FG"));
        FG->setMaximum(255);
        FG->setValue(255);
        FG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FG, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        FB = new QSlider(groupBox_3);
        FB->setObjectName(QStringLiteral("FB"));
        FB->setMaximum(255);
        FB->setValue(255);
        FB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FB, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        FA = new QSlider(groupBox_3);
        FA->setObjectName(QStringLiteral("FA"));
        FA->setMaximum(255);
        FA->setValue(255);
        FA->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FA, 3, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox);

        splitter->addWidget(verticalLayoutWidget);

        horizontalLayout_2->addWidget(splitter);


        retranslateUi(Lab1Class);

        QMetaObject::connectSlotsByName(Lab1Class);
    } // setupUi

    void retranslateUi(QWidget *Lab1Class)
    {
        Lab1Class->setWindowTitle(QApplication::translate("Lab1Class", "Lab1", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Lab1Class", "Placing", Q_NULLPTR));
        label->setText(QApplication::translate("Lab1Class", "Size", Q_NULLPTR));
        label_10->setText(QApplication::translate("Lab1Class", "Number", Q_NULLPTR));
        label_6->setText(QApplication::translate("Lab1Class", "Angle", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Lab1Class", "Colors", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Lab1Class", "Background", Q_NULLPTR));
        label_11->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_12->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        label_13->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Lab1Class", "Foreground", Q_NULLPTR));
        label_2->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_4->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        label_3->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        label_7->setText(QApplication::translate("Lab1Class", "A", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Lab1Class: public Ui_Lab1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_H
