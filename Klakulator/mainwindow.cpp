#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "logika.h"
#include <QMessageBox>
Kalkulator kalk;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ZeroButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"0");
}

void MainWindow::on_OneButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"1");
}

void MainWindow::on_TwoButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"2");
}

void MainWindow::on_ThreeButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"3");
}

void MainWindow::on_FourButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"4");
}

void MainWindow::on_FiveButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"5");
}

void MainWindow::on_SixButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"6");
}

void MainWindow::on_SevenButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"7");
}

void MainWindow::on_EightButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"8");
}

void MainWindow::on_NineButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current+"9");
}

void MainWindow::on_EquButton_clicked()
{
    QString current = ui->Display->text();
    int opIndex = current.indexOf(kalk.getOper());

    if (opIndex != -1) {
        QString b_str = current.mid(opIndex + 1);
        kalk.setB(b_str.toDouble());
    }

    switch(kalk.getOper()){
    case '+':
        kalk.add();
        break;
    case '-':
        kalk.sub();
        break;
    case '*':
        kalk.mul();
        break;
    case '/':
        if (!kalk.getB()) {
            QMessageBox::critical(this, "Błąd Dzielenia", "Drugi argument nie może być równy 0.");
        } else {
            kalk.div();
        }
        break;
    case '%':
        if (!kalk.getB()) {
            QMessageBox::critical(this, "Błąd Reszty z Dzielenia", "Drugi argument nie może być równy 0.");
        } else {
            kalk.mod();
        }
        break;
    }
    kalk.setOpFlag(0);
    ui->Display->setNum(kalk.getMem());
}

void MainWindow::on_PlusButton_clicked()
{
    if(!kalk.getOpFlag()){
    QString current = ui->Display->text();
    kalk.setA(current.toDouble());
    kalk.setOper('+');
    ui->Display->setText(current + "+");
    kalk.setOpFlag(1);
    }
}

void MainWindow::on_SubButton_clicked()
{
    if(!kalk.getOpFlag()){
        QString current = ui->Display->text();
        kalk.setA(current.toDouble());
        kalk.setOper('-');
        ui->Display->setText(current + "-");
        kalk.setOpFlag(1);
    };
}

void MainWindow::on_MulButton_clicked()
{
    if(!kalk.getOpFlag()){
        QString current = ui->Display->text();
        kalk.setA(current.toDouble());
        kalk.setOper('*');
        ui->Display->setText(current + "*");
        kalk.setOpFlag(1);
    }
}

void MainWindow::on_DivButton_clicked()
{
    if(!kalk.getOpFlag()){
        QString current = ui->Display->text();
        kalk.setA(current.toDouble());
        kalk.setOper('/');
        ui->Display->setText(current + "/");
        kalk.setOpFlag(1);
    }
}

void MainWindow::on_ModButton_clicked()
{
    if(!kalk.getOpFlag()){
        QString current = ui->Display->text();
        kalk.setA(current.toDouble());
        kalk.setOper('%');
        ui->Display->setText(current + "%");
        kalk.setOpFlag(1);
    }
}

void MainWindow::on_EraseButton_clicked()
{
    kalk.erase();
    ui->Display->setText("");
}

void MainWindow::on_CommaButton_clicked()
{
    QString current = ui->Display->text();
    ui->Display->setText(current + ".");
}


void MainWindow::on_actionO_autorze_triggered()
{
    QMessageBox::about(this, "O autorze", "Mateusz Warsz\nNumer albumu: 287129\nWydział Elektroniki Fotoniki i Mikrosystemów\nGrupa studencka numer 3");
}

