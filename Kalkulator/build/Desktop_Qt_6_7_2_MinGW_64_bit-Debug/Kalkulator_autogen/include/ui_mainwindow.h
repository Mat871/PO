/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *Display;
    QGridLayout *gridLayout_3;
    QPushButton *FourButton;
    QPushButton *SumButton;
    QPushButton *ThreeButton;
    QPushButton *EraseButton;
    QPushButton *SixButton;
    QPushButton *SubButton;
    QPushButton *SevenButton;
    QPushButton *ZeroButton;
    QPushButton *NineButton;
    QPushButton *OneButton;
    QPushButton *EightButton;
    QPushButton *MulButton;
    QPushButton *TwoButton;
    QPushButton *DivButton;
    QPushButton *FiveButton;
    QPushButton *ClearButton;
    QPushButton *ComButton;
    QPushButton *EquButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(300, 400));
        MainWindow->setMaximumSize(QSize(300, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(300, 400));
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Display = new QLabel(centralwidget);
        Display->setObjectName("Display");
        Display->setMinimumSize(QSize(0, 100));
        Display->setMaximumSize(QSize(16777215, 100));
        Display->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Display->setFrameShape(QFrame::Shape::StyledPanel);
        Display->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(Display);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        FourButton = new QPushButton(centralwidget);
        FourButton->setObjectName("FourButton");
        sizePolicy1.setHeightForWidth(FourButton->sizePolicy().hasHeightForWidth());
        FourButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(FourButton, 3, 0, 1, 1);

        SumButton = new QPushButton(centralwidget);
        SumButton->setObjectName("SumButton");
        sizePolicy1.setHeightForWidth(SumButton->sizePolicy().hasHeightForWidth());
        SumButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(SumButton, 5, 3, 1, 1);

        ThreeButton = new QPushButton(centralwidget);
        ThreeButton->setObjectName("ThreeButton");
        sizePolicy1.setHeightForWidth(ThreeButton->sizePolicy().hasHeightForWidth());
        ThreeButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(ThreeButton, 4, 2, 1, 1);

        EraseButton = new QPushButton(centralwidget);
        EraseButton->setObjectName("EraseButton");
        sizePolicy1.setHeightForWidth(EraseButton->sizePolicy().hasHeightForWidth());
        EraseButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(EraseButton, 0, 0, 1, 1);

        SixButton = new QPushButton(centralwidget);
        SixButton->setObjectName("SixButton");
        sizePolicy1.setHeightForWidth(SixButton->sizePolicy().hasHeightForWidth());
        SixButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(SixButton, 3, 2, 1, 1);

        SubButton = new QPushButton(centralwidget);
        SubButton->setObjectName("SubButton");
        sizePolicy1.setHeightForWidth(SubButton->sizePolicy().hasHeightForWidth());
        SubButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(SubButton, 4, 3, 1, 1);

        SevenButton = new QPushButton(centralwidget);
        SevenButton->setObjectName("SevenButton");
        sizePolicy1.setHeightForWidth(SevenButton->sizePolicy().hasHeightForWidth());
        SevenButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(SevenButton, 2, 0, 1, 1);

        ZeroButton = new QPushButton(centralwidget);
        ZeroButton->setObjectName("ZeroButton");
        sizePolicy1.setHeightForWidth(ZeroButton->sizePolicy().hasHeightForWidth());
        ZeroButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(ZeroButton, 5, 1, 1, 1);

        NineButton = new QPushButton(centralwidget);
        NineButton->setObjectName("NineButton");
        sizePolicy1.setHeightForWidth(NineButton->sizePolicy().hasHeightForWidth());
        NineButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(NineButton, 2, 2, 1, 1);

        OneButton = new QPushButton(centralwidget);
        OneButton->setObjectName("OneButton");
        sizePolicy1.setHeightForWidth(OneButton->sizePolicy().hasHeightForWidth());
        OneButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(OneButton, 4, 0, 1, 1);

        EightButton = new QPushButton(centralwidget);
        EightButton->setObjectName("EightButton");
        sizePolicy1.setHeightForWidth(EightButton->sizePolicy().hasHeightForWidth());
        EightButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(EightButton, 2, 1, 1, 1);

        MulButton = new QPushButton(centralwidget);
        MulButton->setObjectName("MulButton");
        sizePolicy1.setHeightForWidth(MulButton->sizePolicy().hasHeightForWidth());
        MulButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(MulButton, 3, 3, 1, 1);

        TwoButton = new QPushButton(centralwidget);
        TwoButton->setObjectName("TwoButton");
        sizePolicy1.setHeightForWidth(TwoButton->sizePolicy().hasHeightForWidth());
        TwoButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(TwoButton, 4, 1, 1, 1);

        DivButton = new QPushButton(centralwidget);
        DivButton->setObjectName("DivButton");
        sizePolicy1.setHeightForWidth(DivButton->sizePolicy().hasHeightForWidth());
        DivButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(DivButton, 2, 3, 1, 1);

        FiveButton = new QPushButton(centralwidget);
        FiveButton->setObjectName("FiveButton");
        sizePolicy1.setHeightForWidth(FiveButton->sizePolicy().hasHeightForWidth());
        FiveButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(FiveButton, 3, 1, 1, 1);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");
        sizePolicy1.setHeightForWidth(ClearButton->sizePolicy().hasHeightForWidth());
        ClearButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(ClearButton, 0, 3, 1, 1);

        ComButton = new QPushButton(centralwidget);
        ComButton->setObjectName("ComButton");
        sizePolicy1.setHeightForWidth(ComButton->sizePolicy().hasHeightForWidth());
        ComButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(ComButton, 5, 0, 1, 1);

        EquButton = new QPushButton(centralwidget);
        EquButton->setObjectName("EquButton");
        sizePolicy1.setHeightForWidth(EquButton->sizePolicy().hasHeightForWidth());
        EquButton->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(EquButton, 5, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Display->setText(QString());
        FourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        SumButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ThreeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        EraseButton->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        SixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        SubButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        SevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        ZeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        NineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        OneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        EightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        MulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        TwoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        DivButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        FiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        ComButton->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        EquButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
