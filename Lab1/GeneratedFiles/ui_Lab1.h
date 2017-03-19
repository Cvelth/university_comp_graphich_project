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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab1Class
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *lab1;
    QRadioButton *lab2;
    QGridLayout *gridLayout_6;
    QSlider *PB;
    QLabel *lPA;
    QLabel *lPR;
    QSlider *PR;
    QSlider *PN;
    QLabel *lPN;
    QSlider *PA;
    QLabel *lPB;
    QPushButton *addPA;
    QPushButton *addPB;
    QPushButton *addPR;
    QPushButton *addPN;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QSlider *Speed;
    QPushButton *runButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *centerButton;
    QRadioButton *randomButton;
    QRadioButton *circleButton;
    QGridLayout *gridLayout_4;
    QSlider *Number;
    QLabel *label_10;
    QPushButton *addNumber;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QSlider *ElementAngle;
    QLabel *label_8;
    QSlider *SceneAngle;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_14;
    QSlider *Size;
    QSlider *Width;
    QPushButton *addWidth;
    QPushButton *addSize;
    QPushButton *addEAngle;
    QPushButton *addSAngle;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QSlider *BG;
    QSlider *BB;
    QLabel *label_11;
    QLabel *label_13;
    QSlider *BR;
    QPushButton *addBR;
    QPushButton *addBG;
    QPushButton *addBB;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QSlider *FG;
    QLabel *label_2;
    QLabel *label_4;
    QSlider *FB;
    QSlider *FA;
    QLabel *label_7;
    QSlider *FR;
    QLabel *label_3;
    QPushButton *addFR;
    QPushButton *addFG;
    QPushButton *addFB;
    QPushButton *addFA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSlider *Scale;
    QPushButton *addScale;

    void setupUi(QWidget *Lab1Class)
    {
        if (Lab1Class->objectName().isEmpty())
            Lab1Class->setObjectName(QStringLiteral("Lab1Class"));
        Lab1Class->resize(742, 881);
        verticalLayout_3 = new QVBoxLayout(Lab1Class);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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
        groupBox_7 = new QGroupBox(verticalLayoutWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_6 = new QVBoxLayout(groupBox_7);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lab1 = new QRadioButton(groupBox_7);
        lab1->setObjectName(QStringLiteral("lab1"));
        lab1->setChecked(true);

        horizontalLayout_8->addWidget(lab1);

        lab2 = new QRadioButton(groupBox_7);
        lab2->setObjectName(QStringLiteral("lab2"));
        lab2->setChecked(false);

        horizontalLayout_8->addWidget(lab2);


        verticalLayout_6->addLayout(horizontalLayout_8);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        PB = new QSlider(groupBox_7);
        PB->setObjectName(QStringLiteral("PB"));
        PB->setMinimum(1);
        PB->setMaximum(1000);
        PB->setValue(300);
        PB->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PB, 1, 1, 1, 1);

        lPA = new QLabel(groupBox_7);
        lPA->setObjectName(QStringLiteral("lPA"));

        gridLayout_6->addWidget(lPA, 0, 0, 1, 1);

        lPR = new QLabel(groupBox_7);
        lPR->setObjectName(QStringLiteral("lPR"));

        gridLayout_6->addWidget(lPR, 2, 0, 1, 1);

        PR = new QSlider(groupBox_7);
        PR->setObjectName(QStringLiteral("PR"));
        PR->setMinimum(1);
        PR->setMaximum(100);
        PR->setValue(50);
        PR->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PR, 2, 1, 1, 1);

        PN = new QSlider(groupBox_7);
        PN->setObjectName(QStringLiteral("PN"));
        PN->setMinimum(1);
        PN->setMaximum(15);
        PN->setValue(1);
        PN->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PN, 3, 1, 1, 1);

        lPN = new QLabel(groupBox_7);
        lPN->setObjectName(QStringLiteral("lPN"));

        gridLayout_6->addWidget(lPN, 3, 0, 1, 1);

        PA = new QSlider(groupBox_7);
        PA->setObjectName(QStringLiteral("PA"));
        PA->setMinimum(1);
        PA->setMaximum(1000);
        PA->setValue(300);
        PA->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PA, 0, 1, 1, 1);

        lPB = new QLabel(groupBox_7);
        lPB->setObjectName(QStringLiteral("lPB"));

        gridLayout_6->addWidget(lPB, 1, 0, 1, 1);

        addPA = new QPushButton(groupBox_7);
        addPA->setObjectName(QStringLiteral("addPA"));
        addPA->setCheckable(true);

        gridLayout_6->addWidget(addPA, 0, 2, 1, 1);

        addPB = new QPushButton(groupBox_7);
        addPB->setObjectName(QStringLiteral("addPB"));
        addPB->setCheckable(true);

        gridLayout_6->addWidget(addPB, 1, 2, 1, 1);

        addPR = new QPushButton(groupBox_7);
        addPR->setObjectName(QStringLiteral("addPR"));
        addPR->setCheckable(true);

        gridLayout_6->addWidget(addPR, 2, 2, 1, 1);

        addPN = new QPushButton(groupBox_7);
        addPN->setObjectName(QStringLiteral("addPN"));
        addPN->setCheckable(true);

        gridLayout_6->addWidget(addPN, 3, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout_6);


        verticalLayout->addWidget(groupBox_7);

        groupBox_6 = new QGroupBox(verticalLayoutWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_15);

        Speed = new QSlider(groupBox_6);
        Speed->setObjectName(QStringLiteral("Speed"));
        Speed->setMinimum(0);
        Speed->setMaximum(100);
        Speed->setValue(99);
        Speed->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(Speed);


        verticalLayout_5->addLayout(horizontalLayout_7);

        runButton = new QPushButton(groupBox_6);
        runButton->setObjectName(QStringLiteral("runButton"));
        runButton->setCheckable(true);

        verticalLayout_5->addWidget(runButton);


        verticalLayout->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(verticalLayoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        centerButton = new QRadioButton(groupBox_5);
        centerButton->setObjectName(QStringLiteral("centerButton"));

        horizontalLayout_6->addWidget(centerButton);

        randomButton = new QRadioButton(groupBox_5);
        randomButton->setObjectName(QStringLiteral("randomButton"));

        horizontalLayout_6->addWidget(randomButton);

        circleButton = new QRadioButton(groupBox_5);
        circleButton->setObjectName(QStringLiteral("circleButton"));

        horizontalLayout_6->addWidget(circleButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Number = new QSlider(groupBox_5);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setMinimum(0);
        Number->setMaximum(250);
        Number->setValue(25);
        Number->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(Number, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        addNumber = new QPushButton(groupBox_5);
        addNumber->setObjectName(QStringLiteral("addNumber"));
        addNumber->setCheckable(true);

        gridLayout_4->addWidget(addNumber, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);


        verticalLayout->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ElementAngle = new QSlider(groupBox_4);
        ElementAngle->setObjectName(QStringLiteral("ElementAngle"));
        ElementAngle->setMaximum(360);
        ElementAngle->setValue(359);
        ElementAngle->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(ElementAngle, 3, 1, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 4, 0, 1, 1);

        SceneAngle = new QSlider(groupBox_4);
        SceneAngle->setObjectName(QStringLiteral("SceneAngle"));
        SceneAngle->setMaximum(360);
        SceneAngle->setValue(359);
        SceneAngle->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(SceneAngle, 4, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        Size = new QSlider(groupBox_4);
        Size->setObjectName(QStringLiteral("Size"));
        Size->setMinimum(1);
        Size->setMaximum(999);
        Size->setValue(99);
        Size->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Size, 2, 1, 1, 1);

        Width = new QSlider(groupBox_4);
        Width->setObjectName(QStringLiteral("Width"));
        Width->setMinimum(50);
        Width->setMaximum(500);
        Width->setValue(100);
        Width->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Width, 1, 1, 1, 1);

        addWidth = new QPushButton(groupBox_4);
        addWidth->setObjectName(QStringLiteral("addWidth"));
        addWidth->setCheckable(true);

        gridLayout_3->addWidget(addWidth, 1, 2, 1, 1);

        addSize = new QPushButton(groupBox_4);
        addSize->setObjectName(QStringLiteral("addSize"));
        addSize->setCheckable(true);

        gridLayout_3->addWidget(addSize, 2, 2, 1, 1);

        addEAngle = new QPushButton(groupBox_4);
        addEAngle->setObjectName(QStringLiteral("addEAngle"));
        addEAngle->setCheckable(true);

        gridLayout_3->addWidget(addEAngle, 3, 2, 1, 1);

        addSAngle = new QPushButton(groupBox_4);
        addSAngle->setObjectName(QStringLiteral("addSAngle"));
        addSAngle->setCheckable(true);

        gridLayout_3->addWidget(addSAngle, 4, 2, 1, 1);


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
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

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

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        BR = new QSlider(groupBox_2);
        BR->setObjectName(QStringLiteral("BR"));
        BR->setMaximum(255);
        BR->setValue(255);
        BR->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BR, 0, 1, 1, 1);

        addBR = new QPushButton(groupBox_2);
        addBR->setObjectName(QStringLiteral("addBR"));
        addBR->setCheckable(true);

        gridLayout_2->addWidget(addBR, 0, 2, 1, 1);

        addBG = new QPushButton(groupBox_2);
        addBG->setObjectName(QStringLiteral("addBG"));
        addBG->setCheckable(true);

        gridLayout_2->addWidget(addBG, 1, 2, 1, 1);

        addBB = new QPushButton(groupBox_2);
        addBB->setObjectName(QStringLiteral("addBB"));
        addBB->setCheckable(true);

        gridLayout_2->addWidget(addBB, 2, 2, 1, 1);


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
        FG = new QSlider(groupBox_3);
        FG->setObjectName(QStringLiteral("FG"));
        FG->setMaximum(255);
        FG->setValue(255);
        FG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FG, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        FB = new QSlider(groupBox_3);
        FB->setObjectName(QStringLiteral("FB"));
        FB->setMaximum(255);
        FB->setValue(255);
        FB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FB, 2, 1, 1, 1);

        FA = new QSlider(groupBox_3);
        FA->setObjectName(QStringLiteral("FA"));
        FA->setMaximum(255);
        FA->setValue(255);
        FA->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FA, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        FR = new QSlider(groupBox_3);
        FR->setObjectName(QStringLiteral("FR"));
        FR->setMaximum(255);
        FR->setValue(255);
        FR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FR, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        addFR = new QPushButton(groupBox_3);
        addFR->setObjectName(QStringLiteral("addFR"));
        addFR->setCheckable(true);

        gridLayout->addWidget(addFR, 0, 2, 1, 1);

        addFG = new QPushButton(groupBox_3);
        addFG->setObjectName(QStringLiteral("addFG"));
        addFG->setCheckable(true);

        gridLayout->addWidget(addFG, 1, 2, 1, 1);

        addFB = new QPushButton(groupBox_3);
        addFB->setObjectName(QStringLiteral("addFB"));
        addFB->setCheckable(true);

        gridLayout->addWidget(addFB, 2, 2, 1, 1);

        addFA = new QPushButton(groupBox_3);
        addFA->setObjectName(QStringLiteral("addFA"));
        addFA->setCheckable(true);

        gridLayout->addWidget(addFA, 3, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);
        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_9 = new QLabel(Lab1Class);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_9);

        Scale = new QSlider(Lab1Class);
        Scale->setObjectName(QStringLiteral("Scale"));
        Scale->setMinimum(1);
        Scale->setMaximum(1999);
        Scale->setValue(99);
        Scale->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(Scale);

        addScale = new QPushButton(Lab1Class);
        addScale->setObjectName(QStringLiteral("addScale"));
        addScale->setCheckable(true);

        horizontalLayout_2->addWidget(addScale);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);

        retranslateUi(Lab1Class);

        QMetaObject::connectSlotsByName(Lab1Class);
    } // setupUi

    void retranslateUi(QWidget *Lab1Class)
    {
        Lab1Class->setWindowTitle(QApplication::translate("Lab1Class", "Lab1", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("Lab1Class", "Lab", Q_NULLPTR));
        lab1->setText(QApplication::translate("Lab1Class", "Lab 1", Q_NULLPTR));
        lab2->setText(QApplication::translate("Lab1Class", "Lab 2", Q_NULLPTR));
        lPA->setText(QApplication::translate("Lab1Class", "A", Q_NULLPTR));
        lPR->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        lPN->setText(QApplication::translate("Lab1Class", "N", Q_NULLPTR));
        lPB->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        addPA->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPN->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Lab1Class", "Timer", Q_NULLPTR));
        label_15->setText(QApplication::translate("Lab1Class", "Timer\n"
"speed", Q_NULLPTR));
        runButton->setText(QApplication::translate("Lab1Class", "Run", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Lab1Class", "Formation", Q_NULLPTR));
        centerButton->setText(QApplication::translate("Lab1Class", "Centered", Q_NULLPTR));
        randomButton->setText(QApplication::translate("Lab1Class", "Random", Q_NULLPTR));
        circleButton->setText(QApplication::translate("Lab1Class", "Circle", Q_NULLPTR));
        label_10->setText(QApplication::translate("Lab1Class", "Elements\n"
"Number", Q_NULLPTR));
        addNumber->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Lab1Class", "Placing", Q_NULLPTR));
        label_8->setText(QApplication::translate("Lab1Class", "Scene\n"
"Angle", Q_NULLPTR));
        label->setText(QApplication::translate("Lab1Class", "Element\n"
"Size", Q_NULLPTR));
        label_6->setText(QApplication::translate("Lab1Class", "Element\n"
"Angle", Q_NULLPTR));
        label_14->setText(QApplication::translate("Lab1Class", "Lines\n"
"Width", Q_NULLPTR));
        addWidth->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addSize->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addEAngle->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addSAngle->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Lab1Class", "Colors", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Lab1Class", "Background", Q_NULLPTR));
        label_12->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        label_11->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_13->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        addBR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addBG->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addBB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Lab1Class", "Foreground", Q_NULLPTR));
        label_2->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_4->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        label_7->setText(QApplication::translate("Lab1Class", "A", Q_NULLPTR));
        label_3->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        addFR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFG->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFA->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        label_9->setText(QApplication::translate("Lab1Class", "Scene\n"
"scaling", Q_NULLPTR));
        addScale->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Lab1Class: public Ui_Lab1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB1_H
