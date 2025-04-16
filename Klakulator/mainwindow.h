#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ZeroButton_clicked();

    void on_TwoButton_clicked();

    void on_OneButton_clicked();

    void on_ThreeButton_clicked();

    void on_FourButton_clicked();

    void on_FiveButton_clicked();

    void on_SixButton_clicked();

    void on_SevenButton_clicked();

    void on_EightButton_clicked();

    void on_NineButton_clicked();

    void on_PlusButton_clicked();

    void on_EquButton_clicked();

    void on_SubButton_clicked();

    void on_MulButton_clicked();

    void on_DivButton_clicked();

    void on_ModButton_clicked();

    void on_EraseButton_clicked();

    void on_CommaButton_clicked();

    void on_actionO_autorze_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
