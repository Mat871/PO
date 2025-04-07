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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QPushButton *MulButton;
    QPushButton *FourButton;
    QPushButton *SixButton;
    QPushButton *OneButton;
    QPushButton *NineButton;
    QPushButton *ComButton;
    QPushButton *EightButton;
    QPushButton *SubButton;
    QPushButton *EraseButton;
    QPushButton *ThreeButton;
    QPushButton *TwoButton;
    QPushButton *FiveButton;
    QPushButton *DivButton;
    QPushButton *ZeroButton;
    QPushButton *EnterButton;
    QPushButton *SevenButton;
    QPushButton *ModButton;
    QPushButton *SumButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
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
        gridFrame = new QFrame(centralwidget);
        gridFrame->setObjectName("gridFrame");
        gridFrame->setGeometry(QRect(25, 140, 250, 200));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy1);
        gridFrame->setMinimumSize(QSize(0, 0));
        gridFrame->setMaximumSize(QSize(99999, 99999));
        gridFrame->setBaseSize(QSize(200, 250));
        gridFrame->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridFrame->setAutoFillBackground(false);
        gridFrame->setFrameShape(QFrame::Shape::NoFrame);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        gridLayout->setVerticalSpacing(6);
        MulButton = new QPushButton(gridFrame);
        MulButton->setObjectName("MulButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MulButton->sizePolicy().hasHeightForWidth());
        MulButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(MulButton, 2, 3, 1, 1);

        FourButton = new QPushButton(gridFrame);
        FourButton->setObjectName("FourButton");
        sizePolicy2.setHeightForWidth(FourButton->sizePolicy().hasHeightForWidth());
        FourButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(FourButton, 3, 0, 1, 1);

        SixButton = new QPushButton(gridFrame);
        SixButton->setObjectName("SixButton");
        sizePolicy2.setHeightForWidth(SixButton->sizePolicy().hasHeightForWidth());
        SixButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(SixButton, 3, 2, 1, 1);

        OneButton = new QPushButton(gridFrame);
        OneButton->setObjectName("OneButton");
        sizePolicy2.setHeightForWidth(OneButton->sizePolicy().hasHeightForWidth());
        OneButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(OneButton, 4, 0, 1, 1);

        NineButton = new QPushButton(gridFrame);
        NineButton->setObjectName("NineButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(NineButton->sizePolicy().hasHeightForWidth());
        NineButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(NineButton, 2, 2, 1, 1);

        ComButton = new QPushButton(gridFrame);
        ComButton->setObjectName("ComButton");
        sizePolicy2.setHeightForWidth(ComButton->sizePolicy().hasHeightForWidth());
        ComButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ComButton, 5, 1, 1, 1);

        EightButton = new QPushButton(gridFrame);
        EightButton->setObjectName("EightButton");
        sizePolicy2.setHeightForWidth(EightButton->sizePolicy().hasHeightForWidth());
        EightButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(EightButton, 2, 1, 1, 1);

        SubButton = new QPushButton(gridFrame);
        SubButton->setObjectName("SubButton");
        sizePolicy2.setHeightForWidth(SubButton->sizePolicy().hasHeightForWidth());
        SubButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(SubButton, 3, 3, 1, 1);

        EraseButton = new QPushButton(gridFrame);
        EraseButton->setObjectName("EraseButton");
        EraseButton->setEnabled(true);
        sizePolicy2.setHeightForWidth(EraseButton->sizePolicy().hasHeightForWidth());
        EraseButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(EraseButton, 0, 0, 1, 1);

        ThreeButton = new QPushButton(gridFrame);
        ThreeButton->setObjectName("ThreeButton");
        sizePolicy2.setHeightForWidth(ThreeButton->sizePolicy().hasHeightForWidth());
        ThreeButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ThreeButton, 4, 2, 1, 1);

        TwoButton = new QPushButton(gridFrame);
        TwoButton->setObjectName("TwoButton");
        sizePolicy2.setHeightForWidth(TwoButton->sizePolicy().hasHeightForWidth());
        TwoButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(TwoButton, 4, 1, 1, 1);

        FiveButton = new QPushButton(gridFrame);
        FiveButton->setObjectName("FiveButton");
        sizePolicy2.setHeightForWidth(FiveButton->sizePolicy().hasHeightForWidth());
        FiveButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(FiveButton, 3, 1, 1, 1);

        DivButton = new QPushButton(gridFrame);
        DivButton->setObjectName("DivButton");
        sizePolicy3.setHeightForWidth(DivButton->sizePolicy().hasHeightForWidth());
        DivButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(DivButton, 0, 3, 1, 1);

        ZeroButton = new QPushButton(gridFrame);
        ZeroButton->setObjectName("ZeroButton");
        sizePolicy2.setHeightForWidth(ZeroButton->sizePolicy().hasHeightForWidth());
        ZeroButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(ZeroButton, 5, 0, 1, 1);

        EnterButton = new QPushButton(gridFrame);
        EnterButton->setObjectName("EnterButton");
        sizePolicy2.setHeightForWidth(EnterButton->sizePolicy().hasHeightForWidth());
        EnterButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(EnterButton, 5, 2, 1, 1);

        SevenButton = new QPushButton(gridFrame);
        SevenButton->setObjectName("SevenButton");
        sizePolicy2.setHeightForWidth(SevenButton->sizePolicy().hasHeightForWidth());
        SevenButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(SevenButton, 2, 0, 1, 1);

        ModButton = new QPushButton(gridFrame);
        ModButton->setObjectName("ModButton");
        sizePolicy3.setHeightForWidth(ModButton->sizePolicy().hasHeightForWidth());
        ModButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(ModButton, 0, 2, 1, 1);

        SumButton = new QPushButton(gridFrame);
        SumButton->setObjectName("SumButton");
        sizePolicy1.setHeightForWidth(SumButton->sizePolicy().hasHeightForWidth());
        SumButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(SumButton, 4, 3, 2, 1);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(25, 20, 250, 100));
        QSizePolicy sizePolicy4(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy4);
        textBrowser->setMinimumSize(QSize(250, 100));
        textBrowser->setMaximumSize(QSize(250, 100));
        textBrowser->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        FourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        SixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        OneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        NineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        ComButton->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
        EightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        SubButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        EraseButton->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        ThreeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        TwoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        FiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        DivButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        ZeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        EnterButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        SevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        ModButton->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        SumButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
