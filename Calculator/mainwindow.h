#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double operand_1;
    double operand_2;

private slots:
    void digit_numbers();
    void on_dot_btn_clicked();
    void operations();
    void on_AC_btn_clicked();
    void on_equals_btn_clicked();
    void math_operations();
};
#endif // MAINWINDOW_H
