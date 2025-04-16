/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
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
    QVBoxLayout *verticalLayout_2;
    QLabel *Display;
    QGridLayout *gridLayout;
    QPushButton *FiveButton;
    QPushButton *NineButton;
    QPushButton *SubButton;
    QPushButton *ModButton;
    QPushButton *ZeroButton;
    QPushButton *DivButton;
    QPushButton *PlusButton;
    QPushButton *ThreeButton;
    QPushButton *EightButton;
    QPushButton *FourButton;
    QPushButton *SevenButton;
    QPushButton *EraseButton;
    QPushButton *TwoButton;
    QPushButton *OneButton;
    QPushButton *ClearButton;
    QPushButton *MulButton;
    QPushButton *CommaButton;
    QPushButton *SixButton;
    QPushButton *EquButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 450);
        MainWindow->setMinimumSize(QSize(300, 450));
        MainWindow->setMaximumSize(QSize(300, 450));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(300, 450));
        centralwidget->setMaximumSize(QSize(300, 450));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        Display = new QLabel(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        Display->setMaximumSize(QSize(16777215, 150));
        Display->setFrameShape(QFrame::Shape::WinPanel);

        verticalLayout_2->addWidget(Display);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        FiveButton = new QPushButton(centralwidget);
        FiveButton->setObjectName("FiveButton");
        sizePolicy.setHeightForWidth(FiveButton->sizePolicy().hasHeightForWidth());
        FiveButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(FiveButton, 3, 1, 1, 1);

        NineButton = new QPushButton(centralwidget);
        NineButton->setObjectName("NineButton");
        sizePolicy.setHeightForWidth(NineButton->sizePolicy().hasHeightForWidth());
        NineButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(NineButton, 2, 2, 1, 1);

        SubButton = new QPushButton(centralwidget);
        SubButton->setObjectName("SubButton");
        sizePolicy.setHeightForWidth(SubButton->sizePolicy().hasHeightForWidth());
        SubButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(SubButton, 4, 4, 1, 1);

        ModButton = new QPushButton(centralwidget);
        ModButton->setObjectName("ModButton");

        gridLayout->addWidget(ModButton, 0, 4, 1, 1);

        ZeroButton = new QPushButton(centralwidget);
        ZeroButton->setObjectName("ZeroButton");
        sizePolicy.setHeightForWidth(ZeroButton->sizePolicy().hasHeightForWidth());
        ZeroButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ZeroButton, 5, 1, 1, 1);

        DivButton = new QPushButton(centralwidget);
        DivButton->setObjectName("DivButton");
        sizePolicy.setHeightForWidth(DivButton->sizePolicy().hasHeightForWidth());
        DivButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(DivButton, 2, 4, 1, 1);

        PlusButton = new QPushButton(centralwidget);
        PlusButton->setObjectName("PlusButton");
        sizePolicy.setHeightForWidth(PlusButton->sizePolicy().hasHeightForWidth());
        PlusButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(PlusButton, 5, 4, 1, 1);

        ThreeButton = new QPushButton(centralwidget);
        ThreeButton->setObjectName("ThreeButton");
        sizePolicy.setHeightForWidth(ThreeButton->sizePolicy().hasHeightForWidth());
        ThreeButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ThreeButton, 4, 2, 1, 1);

        EightButton = new QPushButton(centralwidget);
        EightButton->setObjectName("EightButton");
        sizePolicy.setHeightForWidth(EightButton->sizePolicy().hasHeightForWidth());
        EightButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(EightButton, 2, 1, 1, 1);

        FourButton = new QPushButton(centralwidget);
        FourButton->setObjectName("FourButton");
        sizePolicy.setHeightForWidth(FourButton->sizePolicy().hasHeightForWidth());
        FourButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(FourButton, 3, 0, 1, 1);

        SevenButton = new QPushButton(centralwidget);
        SevenButton->setObjectName("SevenButton");
        sizePolicy.setHeightForWidth(SevenButton->sizePolicy().hasHeightForWidth());
        SevenButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(SevenButton, 2, 0, 1, 1);

        EraseButton = new QPushButton(centralwidget);
        EraseButton->setObjectName("EraseButton");

        gridLayout->addWidget(EraseButton, 0, 0, 1, 1);

        TwoButton = new QPushButton(centralwidget);
        TwoButton->setObjectName("TwoButton");
        sizePolicy.setHeightForWidth(TwoButton->sizePolicy().hasHeightForWidth());
        TwoButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(TwoButton, 4, 1, 1, 1);

        OneButton = new QPushButton(centralwidget);
        OneButton->setObjectName("OneButton");
        sizePolicy.setHeightForWidth(OneButton->sizePolicy().hasHeightForWidth());
        OneButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(OneButton, 4, 0, 1, 1);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName("ClearButton");

        gridLayout->addWidget(ClearButton, 0, 2, 1, 1);

        MulButton = new QPushButton(centralwidget);
        MulButton->setObjectName("MulButton");
        sizePolicy.setHeightForWidth(MulButton->sizePolicy().hasHeightForWidth());
        MulButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(MulButton, 3, 4, 1, 1);

        CommaButton = new QPushButton(centralwidget);
        CommaButton->setObjectName("CommaButton");
        sizePolicy.setHeightForWidth(CommaButton->sizePolicy().hasHeightForWidth());
        CommaButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CommaButton, 5, 0, 1, 1);

        SixButton = new QPushButton(centralwidget);
        SixButton->setObjectName("SixButton");
        sizePolicy.setHeightForWidth(SixButton->sizePolicy().hasHeightForWidth());
        SixButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(SixButton, 3, 2, 1, 1);

        EquButton = new QPushButton(centralwidget);
        EquButton->setObjectName("EquButton");
        sizePolicy.setHeightForWidth(EquButton->sizePolicy().hasHeightForWidth());
        EquButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(EquButton, 5, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        FiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        NineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        SubButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        ModButton->setText(QCoreApplication::translate("MainWindow", "Mod", nullptr));
        ZeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        DivButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        PlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ThreeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        EightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        FourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        SevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        EraseButton->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        TwoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        OneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        MulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        CommaButton->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        SixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        EquButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
