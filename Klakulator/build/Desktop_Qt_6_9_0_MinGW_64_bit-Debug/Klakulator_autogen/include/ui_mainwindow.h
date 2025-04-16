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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionO_autorze;
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
    QPushButton *MulButton;
    QPushButton *CommaButton;
    QPushButton *SixButton;
    QPushButton *EquButton;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 472);
        MainWindow->setMinimumSize(QSize(300, 472));
        MainWindow->setMaximumSize(QSize(300, 472));
        actionO_autorze = new QAction(MainWindow);
        actionO_autorze->setObjectName("actionO_autorze");
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
        QFont font;
        font.setPointSize(25);
        Display->setFont(font);
        Display->setFrameShape(QFrame::Shape::WinPanel);
        Display->setLineWidth(1);
        Display->setTextFormat(Qt::TextFormat::PlainText);
        Display->setScaledContents(false);
        Display->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);
        Display->setWordWrap(false);
        Display->setMargin(10);

        verticalLayout_2->addWidget(Display);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        FiveButton = new QPushButton(centralwidget);
        FiveButton->setObjectName("FiveButton");
        sizePolicy.setHeightForWidth(FiveButton->sizePolicy().hasHeightForWidth());
        FiveButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        FiveButton->setFont(font1);

        gridLayout->addWidget(FiveButton, 3, 1, 1, 1);

        NineButton = new QPushButton(centralwidget);
        NineButton->setObjectName("NineButton");
        sizePolicy.setHeightForWidth(NineButton->sizePolicy().hasHeightForWidth());
        NineButton->setSizePolicy(sizePolicy);
        NineButton->setFont(font1);

        gridLayout->addWidget(NineButton, 2, 2, 1, 1);

        SubButton = new QPushButton(centralwidget);
        SubButton->setObjectName("SubButton");
        sizePolicy.setHeightForWidth(SubButton->sizePolicy().hasHeightForWidth());
        SubButton->setSizePolicy(sizePolicy);
        SubButton->setFont(font1);

        gridLayout->addWidget(SubButton, 4, 4, 1, 1);

        ModButton = new QPushButton(centralwidget);
        ModButton->setObjectName("ModButton");
        ModButton->setFont(font1);

        gridLayout->addWidget(ModButton, 0, 4, 1, 1);

        ZeroButton = new QPushButton(centralwidget);
        ZeroButton->setObjectName("ZeroButton");
        sizePolicy.setHeightForWidth(ZeroButton->sizePolicy().hasHeightForWidth());
        ZeroButton->setSizePolicy(sizePolicy);
        ZeroButton->setFont(font1);

        gridLayout->addWidget(ZeroButton, 5, 1, 1, 1);

        DivButton = new QPushButton(centralwidget);
        DivButton->setObjectName("DivButton");
        sizePolicy.setHeightForWidth(DivButton->sizePolicy().hasHeightForWidth());
        DivButton->setSizePolicy(sizePolicy);
        DivButton->setFont(font1);

        gridLayout->addWidget(DivButton, 2, 4, 1, 1);

        PlusButton = new QPushButton(centralwidget);
        PlusButton->setObjectName("PlusButton");
        sizePolicy.setHeightForWidth(PlusButton->sizePolicy().hasHeightForWidth());
        PlusButton->setSizePolicy(sizePolicy);
        PlusButton->setFont(font1);

        gridLayout->addWidget(PlusButton, 5, 4, 1, 1);

        ThreeButton = new QPushButton(centralwidget);
        ThreeButton->setObjectName("ThreeButton");
        sizePolicy.setHeightForWidth(ThreeButton->sizePolicy().hasHeightForWidth());
        ThreeButton->setSizePolicy(sizePolicy);
        ThreeButton->setFont(font1);

        gridLayout->addWidget(ThreeButton, 4, 2, 1, 1);

        EightButton = new QPushButton(centralwidget);
        EightButton->setObjectName("EightButton");
        sizePolicy.setHeightForWidth(EightButton->sizePolicy().hasHeightForWidth());
        EightButton->setSizePolicy(sizePolicy);
        EightButton->setFont(font1);

        gridLayout->addWidget(EightButton, 2, 1, 1, 1);

        FourButton = new QPushButton(centralwidget);
        FourButton->setObjectName("FourButton");
        sizePolicy.setHeightForWidth(FourButton->sizePolicy().hasHeightForWidth());
        FourButton->setSizePolicy(sizePolicy);
        FourButton->setFont(font1);

        gridLayout->addWidget(FourButton, 3, 0, 1, 1);

        SevenButton = new QPushButton(centralwidget);
        SevenButton->setObjectName("SevenButton");
        sizePolicy.setHeightForWidth(SevenButton->sizePolicy().hasHeightForWidth());
        SevenButton->setSizePolicy(sizePolicy);
        SevenButton->setFont(font1);

        gridLayout->addWidget(SevenButton, 2, 0, 1, 1);

        EraseButton = new QPushButton(centralwidget);
        EraseButton->setObjectName("EraseButton");
        EraseButton->setFont(font1);

        gridLayout->addWidget(EraseButton, 0, 0, 1, 1);

        TwoButton = new QPushButton(centralwidget);
        TwoButton->setObjectName("TwoButton");
        sizePolicy.setHeightForWidth(TwoButton->sizePolicy().hasHeightForWidth());
        TwoButton->setSizePolicy(sizePolicy);
        TwoButton->setFont(font1);

        gridLayout->addWidget(TwoButton, 4, 1, 1, 1);

        OneButton = new QPushButton(centralwidget);
        OneButton->setObjectName("OneButton");
        sizePolicy.setHeightForWidth(OneButton->sizePolicy().hasHeightForWidth());
        OneButton->setSizePolicy(sizePolicy);
        OneButton->setFont(font1);

        gridLayout->addWidget(OneButton, 4, 0, 1, 1);

        MulButton = new QPushButton(centralwidget);
        MulButton->setObjectName("MulButton");
        sizePolicy.setHeightForWidth(MulButton->sizePolicy().hasHeightForWidth());
        MulButton->setSizePolicy(sizePolicy);
        MulButton->setFont(font1);

        gridLayout->addWidget(MulButton, 3, 4, 1, 1);

        CommaButton = new QPushButton(centralwidget);
        CommaButton->setObjectName("CommaButton");
        sizePolicy.setHeightForWidth(CommaButton->sizePolicy().hasHeightForWidth());
        CommaButton->setSizePolicy(sizePolicy);
        CommaButton->setFont(font1);

        gridLayout->addWidget(CommaButton, 5, 0, 1, 1);

        SixButton = new QPushButton(centralwidget);
        SixButton->setObjectName("SixButton");
        sizePolicy.setHeightForWidth(SixButton->sizePolicy().hasHeightForWidth());
        SixButton->setSizePolicy(sizePolicy);
        SixButton->setFont(font1);

        gridLayout->addWidget(SixButton, 3, 2, 1, 1);

        EquButton = new QPushButton(centralwidget);
        EquButton->setObjectName("EquButton");
        sizePolicy.setHeightForWidth(EquButton->sizePolicy().hasHeightForWidth());
        EquButton->setSizePolicy(sizePolicy);
        EquButton->setFont(font1);

        gridLayout->addWidget(EquButton, 5, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 300, 22));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionO_autorze);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionO_autorze->setText(QCoreApplication::translate("MainWindow", "O autorze", nullptr));
        Display->setText(QString());
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
        MulButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        CommaButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        SixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        EquButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
