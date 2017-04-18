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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *lab1;
    QRadioButton *lab2;
    QRadioButton *lab3;
    QRadioButton *lab4;
    QRadioButton *lab5;
    QRadioButton *lab6;
    QRadioButton *lab7;
    QGroupBox *lab4_groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *linearButton;
    QRadioButton *columnButton;
    QRadioButton *sectorButton;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *xCheck;
    QCheckBox *yCheck;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *xAxis;
    QCheckBox *yAxis;
    QGroupBox *lab2_groupBox;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_6;
    QSlider *PB;
    QLabel *lPA;
    QLabel *lPR;
    QSlider *PR;
    QLabel *lPN;
    QSlider *PA;
    QLabel *lPB;
    QPushButton *addPA;
    QPushButton *addPB;
    QPushButton *addPR;
    QPushButton *addPN;
    QSlider *PN;
    QGroupBox *timer_groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QSlider *Speed;
    QPushButton *runButton;
    QGroupBox *form_groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *centerButton;
    QRadioButton *randomButton;
    QRadioButton *circleButton;
    QGridLayout *gridLayout_4;
    QSlider *Number;
    QLabel *label_10;
    QPushButton *addNumber;
    QGroupBox *place_groupBox;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_3;
    QPushButton *addWidth;
    QLabel *label_8;
    QPushButton *addSize;
    QSlider *Size;
    QSlider *Width;
    QSlider *SceneAngle;
    QSlider *ElementAngleX;
    QPushButton *addSAngle;
    QLabel *label_14;
    QLabel *label;
    QPushButton *addEAngleX;
    QLabel *label_6;
    QLabel *label_16;
    QSlider *ElementAngleY;
    QPushButton *addEAngleY;
    QLabel *label_17;
    QSlider *ElementAngleZ;
    QPushButton *addEAngleZ;
    QGroupBox *color_groupBox;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *back_groupBox;
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
    QGroupBox *fore_groupBox;
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
    QPushButton *lookAtNull;
    QPushButton *resetCamera;
    QPushButton *resetLight;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSlider *Scale;
    QPushButton *addScale;

    void setupUi(QWidget *Lab1Class)
    {
        if (Lab1Class->objectName().isEmpty())
            Lab1Class->setObjectName(QStringLiteral("Lab1Class"));
        Lab1Class->resize(713, 976);
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
        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(400, 0));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 666, 1017));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lab1 = new QRadioButton(scrollAreaWidgetContents_2);
        lab1->setObjectName(QStringLiteral("lab1"));
        lab1->setChecked(true);

        horizontalLayout_8->addWidget(lab1);

        lab2 = new QRadioButton(scrollAreaWidgetContents_2);
        lab2->setObjectName(QStringLiteral("lab2"));
        lab2->setChecked(false);

        horizontalLayout_8->addWidget(lab2);

        lab3 = new QRadioButton(scrollAreaWidgetContents_2);
        lab3->setObjectName(QStringLiteral("lab3"));
        lab3->setChecked(false);

        horizontalLayout_8->addWidget(lab3);

        lab4 = new QRadioButton(scrollAreaWidgetContents_2);
        lab4->setObjectName(QStringLiteral("lab4"));
        lab4->setChecked(false);

        horizontalLayout_8->addWidget(lab4);

        lab5 = new QRadioButton(scrollAreaWidgetContents_2);
        lab5->setObjectName(QStringLiteral("lab5"));

        horizontalLayout_8->addWidget(lab5);

        lab6 = new QRadioButton(scrollAreaWidgetContents_2);
        lab6->setObjectName(QStringLiteral("lab6"));
        lab6->setChecked(false);

        horizontalLayout_8->addWidget(lab6);

        lab7 = new QRadioButton(scrollAreaWidgetContents_2);
        lab7->setObjectName(QStringLiteral("lab7"));
        lab7->setChecked(false);

        horizontalLayout_8->addWidget(lab7);


        verticalLayout_8->addLayout(horizontalLayout_8);

        lab4_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        lab4_groupBox->setObjectName(QStringLiteral("lab4_groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab4_groupBox->sizePolicy().hasHeightForWidth());
        lab4_groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(lab4_groupBox);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        linearButton = new QRadioButton(lab4_groupBox);
        linearButton->setObjectName(QStringLiteral("linearButton"));
        linearButton->setChecked(true);

        horizontalLayout_9->addWidget(linearButton);

        columnButton = new QRadioButton(lab4_groupBox);
        columnButton->setObjectName(QStringLiteral("columnButton"));
        columnButton->setChecked(false);

        horizontalLayout_9->addWidget(columnButton);

        sectorButton = new QRadioButton(lab4_groupBox);
        sectorButton->setObjectName(QStringLiteral("sectorButton"));
        sectorButton->setChecked(false);

        horizontalLayout_9->addWidget(sectorButton);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        xCheck = new QCheckBox(lab4_groupBox);
        xCheck->setObjectName(QStringLiteral("xCheck"));

        horizontalLayout_10->addWidget(xCheck);

        yCheck = new QCheckBox(lab4_groupBox);
        yCheck->setObjectName(QStringLiteral("yCheck"));

        horizontalLayout_10->addWidget(yCheck);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        xAxis = new QCheckBox(lab4_groupBox);
        xAxis->setObjectName(QStringLiteral("xAxis"));

        horizontalLayout_11->addWidget(xAxis);

        yAxis = new QCheckBox(lab4_groupBox);
        yAxis->setObjectName(QStringLiteral("yAxis"));

        horizontalLayout_11->addWidget(yAxis);


        verticalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_8->addWidget(lab4_groupBox);

        lab2_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        lab2_groupBox->setObjectName(QStringLiteral("lab2_groupBox"));
        sizePolicy1.setHeightForWidth(lab2_groupBox->sizePolicy().hasHeightForWidth());
        lab2_groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_6 = new QVBoxLayout(lab2_groupBox);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        PB = new QSlider(lab2_groupBox);
        PB->setObjectName(QStringLiteral("PB"));
        PB->setMinimum(1);
        PB->setMaximum(1000);
        PB->setValue(300);
        PB->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PB, 1, 1, 1, 1);

        lPA = new QLabel(lab2_groupBox);
        lPA->setObjectName(QStringLiteral("lPA"));

        gridLayout_6->addWidget(lPA, 0, 0, 1, 1);

        lPR = new QLabel(lab2_groupBox);
        lPR->setObjectName(QStringLiteral("lPR"));

        gridLayout_6->addWidget(lPR, 2, 0, 1, 1);

        PR = new QSlider(lab2_groupBox);
        PR->setObjectName(QStringLiteral("PR"));
        PR->setMinimum(1);
        PR->setMaximum(100);
        PR->setValue(50);
        PR->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PR, 2, 1, 1, 1);

        lPN = new QLabel(lab2_groupBox);
        lPN->setObjectName(QStringLiteral("lPN"));

        gridLayout_6->addWidget(lPN, 3, 0, 1, 1);

        PA = new QSlider(lab2_groupBox);
        PA->setObjectName(QStringLiteral("PA"));
        PA->setMinimum(1);
        PA->setMaximum(1000);
        PA->setValue(300);
        PA->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PA, 0, 1, 1, 1);

        lPB = new QLabel(lab2_groupBox);
        lPB->setObjectName(QStringLiteral("lPB"));

        gridLayout_6->addWidget(lPB, 1, 0, 1, 1);

        addPA = new QPushButton(lab2_groupBox);
        addPA->setObjectName(QStringLiteral("addPA"));
        addPA->setCheckable(true);

        gridLayout_6->addWidget(addPA, 0, 2, 1, 1);

        addPB = new QPushButton(lab2_groupBox);
        addPB->setObjectName(QStringLiteral("addPB"));
        addPB->setCheckable(true);

        gridLayout_6->addWidget(addPB, 1, 2, 1, 1);

        addPR = new QPushButton(lab2_groupBox);
        addPR->setObjectName(QStringLiteral("addPR"));
        addPR->setCheckable(true);

        gridLayout_6->addWidget(addPR, 2, 2, 1, 1);

        addPN = new QPushButton(lab2_groupBox);
        addPN->setObjectName(QStringLiteral("addPN"));
        addPN->setCheckable(true);

        gridLayout_6->addWidget(addPN, 3, 2, 1, 1);

        PN = new QSlider(lab2_groupBox);
        PN->setObjectName(QStringLiteral("PN"));
        PN->setMinimum(1);
        PN->setMaximum(15);
        PN->setValue(1);
        PN->setOrientation(Qt::Horizontal);

        gridLayout_6->addWidget(PN, 3, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_6);


        verticalLayout_8->addWidget(lab2_groupBox);

        timer_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        timer_groupBox->setObjectName(QStringLiteral("timer_groupBox"));
        sizePolicy1.setHeightForWidth(timer_groupBox->sizePolicy().hasHeightForWidth());
        timer_groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(timer_groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(timer_groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_15);

        Speed = new QSlider(timer_groupBox);
        Speed->setObjectName(QStringLiteral("Speed"));
        Speed->setMinimum(0);
        Speed->setMaximum(100);
        Speed->setValue(99);
        Speed->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(Speed);


        verticalLayout_5->addLayout(horizontalLayout_7);

        runButton = new QPushButton(timer_groupBox);
        runButton->setObjectName(QStringLiteral("runButton"));
        runButton->setCheckable(true);

        verticalLayout_5->addWidget(runButton);


        verticalLayout_8->addWidget(timer_groupBox);

        form_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        form_groupBox->setObjectName(QStringLiteral("form_groupBox"));
        sizePolicy1.setHeightForWidth(form_groupBox->sizePolicy().hasHeightForWidth());
        form_groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_4 = new QVBoxLayout(form_groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        centerButton = new QRadioButton(form_groupBox);
        centerButton->setObjectName(QStringLiteral("centerButton"));

        horizontalLayout_6->addWidget(centerButton);

        randomButton = new QRadioButton(form_groupBox);
        randomButton->setObjectName(QStringLiteral("randomButton"));

        horizontalLayout_6->addWidget(randomButton);

        circleButton = new QRadioButton(form_groupBox);
        circleButton->setObjectName(QStringLiteral("circleButton"));

        horizontalLayout_6->addWidget(circleButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Number = new QSlider(form_groupBox);
        Number->setObjectName(QStringLiteral("Number"));
        Number->setMinimum(0);
        Number->setMaximum(250);
        Number->setValue(25);
        Number->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(Number, 0, 1, 1, 1);

        label_10 = new QLabel(form_groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        addNumber = new QPushButton(form_groupBox);
        addNumber->setObjectName(QStringLiteral("addNumber"));
        addNumber->setCheckable(true);

        gridLayout_4->addWidget(addNumber, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_4);


        verticalLayout_8->addWidget(form_groupBox);

        place_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        place_groupBox->setObjectName(QStringLiteral("place_groupBox"));
        sizePolicy1.setHeightForWidth(place_groupBox->sizePolicy().hasHeightForWidth());
        place_groupBox->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(place_groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        addWidth = new QPushButton(place_groupBox);
        addWidth->setObjectName(QStringLiteral("addWidth"));
        addWidth->setCheckable(true);

        gridLayout_3->addWidget(addWidth, 1, 2, 1, 1);

        label_8 = new QLabel(place_groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 6, 0, 1, 1);

        addSize = new QPushButton(place_groupBox);
        addSize->setObjectName(QStringLiteral("addSize"));
        addSize->setCheckable(true);

        gridLayout_3->addWidget(addSize, 2, 2, 1, 1);

        Size = new QSlider(place_groupBox);
        Size->setObjectName(QStringLiteral("Size"));
        Size->setMinimum(1);
        Size->setMaximum(999);
        Size->setValue(99);
        Size->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Size, 2, 1, 1, 1);

        Width = new QSlider(place_groupBox);
        Width->setObjectName(QStringLiteral("Width"));
        Width->setMinimum(50);
        Width->setMaximum(500);
        Width->setValue(100);
        Width->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(Width, 1, 1, 1, 1);

        SceneAngle = new QSlider(place_groupBox);
        SceneAngle->setObjectName(QStringLiteral("SceneAngle"));
        SceneAngle->setMaximum(360);
        SceneAngle->setValue(359);
        SceneAngle->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(SceneAngle, 6, 1, 1, 1);

        ElementAngleX = new QSlider(place_groupBox);
        ElementAngleX->setObjectName(QStringLiteral("ElementAngleX"));
        ElementAngleX->setMaximum(360);
        ElementAngleX->setValue(359);
        ElementAngleX->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(ElementAngleX, 3, 1, 1, 1);

        addSAngle = new QPushButton(place_groupBox);
        addSAngle->setObjectName(QStringLiteral("addSAngle"));
        addSAngle->setCheckable(true);

        gridLayout_3->addWidget(addSAngle, 6, 2, 1, 1);

        label_14 = new QLabel(place_groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label = new QLabel(place_groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        addEAngleX = new QPushButton(place_groupBox);
        addEAngleX->setObjectName(QStringLiteral("addEAngleX"));
        addEAngleX->setCheckable(true);

        gridLayout_3->addWidget(addEAngleX, 3, 2, 1, 1);

        label_6 = new QLabel(place_groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_16 = new QLabel(place_groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_16, 4, 0, 1, 1);

        ElementAngleY = new QSlider(place_groupBox);
        ElementAngleY->setObjectName(QStringLiteral("ElementAngleY"));
        ElementAngleY->setMaximum(360);
        ElementAngleY->setValue(359);
        ElementAngleY->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(ElementAngleY, 4, 1, 1, 1);

        addEAngleY = new QPushButton(place_groupBox);
        addEAngleY->setObjectName(QStringLiteral("addEAngleY"));
        addEAngleY->setCheckable(true);

        gridLayout_3->addWidget(addEAngleY, 4, 2, 1, 1);

        label_17 = new QLabel(place_groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_17, 5, 0, 1, 1);

        ElementAngleZ = new QSlider(place_groupBox);
        ElementAngleZ->setObjectName(QStringLiteral("ElementAngleZ"));
        ElementAngleZ->setMaximum(360);
        ElementAngleZ->setValue(359);
        ElementAngleZ->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(ElementAngleZ, 5, 1, 1, 1);

        addEAngleZ = new QPushButton(place_groupBox);
        addEAngleZ->setObjectName(QStringLiteral("addEAngleZ"));
        addEAngleZ->setCheckable(true);

        gridLayout_3->addWidget(addEAngleZ, 5, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_3);


        verticalLayout_8->addWidget(place_groupBox);

        color_groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        color_groupBox->setObjectName(QStringLiteral("color_groupBox"));
        sizePolicy1.setHeightForWidth(color_groupBox->sizePolicy().hasHeightForWidth());
        color_groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(color_groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        back_groupBox = new QGroupBox(color_groupBox);
        back_groupBox->setObjectName(QStringLiteral("back_groupBox"));
        horizontalLayout_4 = new QHBoxLayout(back_groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_12 = new QLabel(back_groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        BG = new QSlider(back_groupBox);
        BG->setObjectName(QStringLiteral("BG"));
        BG->setMaximum(255);
        BG->setValue(255);
        BG->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BG, 1, 1, 1, 1);

        BB = new QSlider(back_groupBox);
        BB->setObjectName(QStringLiteral("BB"));
        BB->setMaximum(255);
        BB->setValue(255);
        BB->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BB, 2, 1, 1, 1);

        label_11 = new QLabel(back_groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 1);

        label_13 = new QLabel(back_groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 0, 1, 1);

        BR = new QSlider(back_groupBox);
        BR->setObjectName(QStringLiteral("BR"));
        BR->setMaximum(255);
        BR->setValue(255);
        BR->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(BR, 0, 1, 1, 1);

        addBR = new QPushButton(back_groupBox);
        addBR->setObjectName(QStringLiteral("addBR"));
        addBR->setCheckable(true);

        gridLayout_2->addWidget(addBR, 0, 2, 1, 1);

        addBG = new QPushButton(back_groupBox);
        addBG->setObjectName(QStringLiteral("addBG"));
        addBG->setCheckable(true);

        gridLayout_2->addWidget(addBG, 1, 2, 1, 1);

        addBB = new QPushButton(back_groupBox);
        addBB->setObjectName(QStringLiteral("addBB"));
        addBB->setCheckable(true);

        gridLayout_2->addWidget(addBB, 2, 2, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(back_groupBox);

        fore_groupBox = new QGroupBox(color_groupBox);
        fore_groupBox->setObjectName(QStringLiteral("fore_groupBox"));
        horizontalLayout_5 = new QHBoxLayout(fore_groupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        FG = new QSlider(fore_groupBox);
        FG->setObjectName(QStringLiteral("FG"));
        FG->setMaximum(255);
        FG->setValue(255);
        FG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FG, 1, 1, 1, 1);

        label_2 = new QLabel(fore_groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(fore_groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        FB = new QSlider(fore_groupBox);
        FB->setObjectName(QStringLiteral("FB"));
        FB->setMaximum(255);
        FB->setValue(255);
        FB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FB, 2, 1, 1, 1);

        FA = new QSlider(fore_groupBox);
        FA->setObjectName(QStringLiteral("FA"));
        FA->setMaximum(255);
        FA->setValue(255);
        FA->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FA, 3, 1, 1, 1);

        label_7 = new QLabel(fore_groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        FR = new QSlider(fore_groupBox);
        FR->setObjectName(QStringLiteral("FR"));
        FR->setMaximum(255);
        FR->setValue(255);
        FR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(FR, 0, 1, 1, 1);

        label_3 = new QLabel(fore_groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        addFR = new QPushButton(fore_groupBox);
        addFR->setObjectName(QStringLiteral("addFR"));
        addFR->setCheckable(true);

        gridLayout->addWidget(addFR, 0, 2, 1, 1);

        addFG = new QPushButton(fore_groupBox);
        addFG->setObjectName(QStringLiteral("addFG"));
        addFG->setCheckable(true);

        gridLayout->addWidget(addFG, 1, 2, 1, 1);

        addFB = new QPushButton(fore_groupBox);
        addFB->setObjectName(QStringLiteral("addFB"));
        addFB->setCheckable(true);

        gridLayout->addWidget(addFB, 2, 2, 1, 1);

        addFA = new QPushButton(fore_groupBox);
        addFA->setObjectName(QStringLiteral("addFA"));
        addFA->setCheckable(true);

        gridLayout->addWidget(addFA, 3, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);


        verticalLayout_2->addWidget(fore_groupBox);


        verticalLayout_8->addWidget(color_groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        lookAtNull = new QPushButton(verticalLayoutWidget);
        lookAtNull->setObjectName(QStringLiteral("lookAtNull"));

        verticalLayout->addWidget(lookAtNull);

        resetCamera = new QPushButton(verticalLayoutWidget);
        resetCamera->setObjectName(QStringLiteral("resetCamera"));

        verticalLayout->addWidget(resetCamera);

        resetLight = new QPushButton(verticalLayoutWidget);
        resetLight->setObjectName(QStringLiteral("resetLight"));

        verticalLayout->addWidget(resetLight);

        verticalLayout->setStretch(0, 1);
        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
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
        lab1->setText(QApplication::translate("Lab1Class", "Lab 1", Q_NULLPTR));
        lab2->setText(QApplication::translate("Lab1Class", "Lab 2", Q_NULLPTR));
        lab3->setText(QApplication::translate("Lab1Class", "Lab 3", Q_NULLPTR));
        lab4->setText(QApplication::translate("Lab1Class", "Lab 4", Q_NULLPTR));
        lab5->setText(QApplication::translate("Lab1Class", "Lab 5", Q_NULLPTR));
        lab6->setText(QApplication::translate("Lab1Class", "Lab 6", Q_NULLPTR));
        lab7->setText(QApplication::translate("Lab1Class", "Lab 7", Q_NULLPTR));
        lab4_groupBox->setTitle(QApplication::translate("Lab1Class", "Lab", Q_NULLPTR));
        linearButton->setText(QApplication::translate("Lab1Class", "Linear", Q_NULLPTR));
        columnButton->setText(QApplication::translate("Lab1Class", "Column", Q_NULLPTR));
        sectorButton->setText(QApplication::translate("Lab1Class", "Sector", Q_NULLPTR));
        xCheck->setText(QApplication::translate("Lab1Class", "x-data", Q_NULLPTR));
        yCheck->setText(QApplication::translate("Lab1Class", "y-data", Q_NULLPTR));
        xAxis->setText(QApplication::translate("Lab1Class", "x-axis", Q_NULLPTR));
        yAxis->setText(QApplication::translate("Lab1Class", "y-axis", Q_NULLPTR));
        lab2_groupBox->setTitle(QApplication::translate("Lab1Class", "Lab", Q_NULLPTR));
        lPA->setText(QApplication::translate("Lab1Class", "A", Q_NULLPTR));
        lPR->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        lPN->setText(QApplication::translate("Lab1Class", "N", Q_NULLPTR));
        lPB->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        addPA->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addPN->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        timer_groupBox->setTitle(QApplication::translate("Lab1Class", "Timer", Q_NULLPTR));
        label_15->setText(QApplication::translate("Lab1Class", "Timer\n"
"speed", Q_NULLPTR));
        runButton->setText(QApplication::translate("Lab1Class", "Run", Q_NULLPTR));
        form_groupBox->setTitle(QApplication::translate("Lab1Class", "Formation", Q_NULLPTR));
        centerButton->setText(QApplication::translate("Lab1Class", "Centered", Q_NULLPTR));
        randomButton->setText(QApplication::translate("Lab1Class", "Random", Q_NULLPTR));
        circleButton->setText(QApplication::translate("Lab1Class", "Circle", Q_NULLPTR));
        label_10->setText(QApplication::translate("Lab1Class", "Elements\n"
"Number", Q_NULLPTR));
        addNumber->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        place_groupBox->setTitle(QApplication::translate("Lab1Class", "Placing", Q_NULLPTR));
        addWidth->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        label_8->setText(QApplication::translate("Lab1Class", "Scene\n"
"Angle", Q_NULLPTR));
        addSize->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addSAngle->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        label_14->setText(QApplication::translate("Lab1Class", "Lines\n"
"Width", Q_NULLPTR));
        label->setText(QApplication::translate("Lab1Class", "Element\n"
"Size", Q_NULLPTR));
        addEAngleX->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        label_6->setText(QApplication::translate("Lab1Class", "Element\n"
"X Angle", Q_NULLPTR));
        label_16->setText(QApplication::translate("Lab1Class", "Element\n"
"Y Angle", Q_NULLPTR));
        addEAngleY->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        label_17->setText(QApplication::translate("Lab1Class", "Element\n"
"Z Angle", Q_NULLPTR));
        addEAngleZ->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        color_groupBox->setTitle(QApplication::translate("Lab1Class", "Colors", Q_NULLPTR));
        back_groupBox->setTitle(QApplication::translate("Lab1Class", "Background", Q_NULLPTR));
        label_12->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        label_11->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_13->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        addBR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addBG->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addBB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        fore_groupBox->setTitle(QApplication::translate("Lab1Class", "Foreground", Q_NULLPTR));
        label_2->setText(QApplication::translate("Lab1Class", "R", Q_NULLPTR));
        label_4->setText(QApplication::translate("Lab1Class", "B", Q_NULLPTR));
        label_7->setText(QApplication::translate("Lab1Class", "A", Q_NULLPTR));
        label_3->setText(QApplication::translate("Lab1Class", "G", Q_NULLPTR));
        addFR->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFG->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFB->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        addFA->setText(QApplication::translate("Lab1Class", "Add", Q_NULLPTR));
        lookAtNull->setText(QApplication::translate("Lab1Class", "Look at (0;0;0)", Q_NULLPTR));
        resetCamera->setText(QApplication::translate("Lab1Class", "Reset Camera and light", Q_NULLPTR));
        resetLight->setText(QApplication::translate("Lab1Class", "Light to camera", Q_NULLPTR));
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
