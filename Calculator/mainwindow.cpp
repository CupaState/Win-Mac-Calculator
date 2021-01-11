#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->zero_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->one_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->two_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->three_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->four_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->five_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->six_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->seven_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->eight_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->nine_btn, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->plus_minus_btn, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->percent_btn, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->plus_btn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->minus_btn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->multiple_btn, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->divide_btn, SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->divide_btn->setCheckable(true);
    ui->multiple_btn->setCheckable(true);
    ui->plus_btn->setCheckable(true);
    ui->minus_btn->setCheckable(true);
    ui->equals_btn->setCheckable(true);

    operand_1 = 0.0;
    operand_2 = 0.0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_numbers()
{
    QPushButton* button =(QPushButton*) sender();

    if(ui->equals_btn->isChecked())
    {
        ui->output_window->clear();
        ui->equals_btn->setChecked(false);
    }
    QString str = (ui->output_window->text() + button->text());


    if(str[0] == '0' && button->text() == '0')
    {
        str = '0';
    }
    else if(str[0] == '0' && button->text() != '0')
    {
        str[0] = ' ';
    }

    if(str[0] == ' ' && str[1] == '0' && str[2] == '0')
    {
        str.remove('0');

    }
    ui->output_window->setText(str);
}


void MainWindow::on_dot_btn_clicked()
{
    if(!ui->output_window->text().contains('.'))
    {
        if(ui->equals_btn->isChecked())
        {
            ui->output_window->clear();
            ui->equals_btn->setChecked(false);
        }
        ui->output_window->setText(ui->output_window->text() + '.');
    }
}

void MainWindow::operations()
{
    QPushButton* button = (QPushButton*) sender();
    double num = 0;

    if(button->text() == "+/-")
    {
        num = ui->output_window->text().toDouble() * -1;
    }
    else if(button->text() == '%')
    {
        num = ui->output_window->text().toDouble() * 0.01;
    }

    ui->output_window->setText(QString::number(num, 'g', 15));
}

void MainWindow::on_AC_btn_clicked()
{
    ui->output_window->setText("0");
}

void MainWindow::on_equals_btn_clicked()
{
    operand_2 = ui->output_window->text().toDouble();
    ui->equals_btn->setChecked(true);
    if(ui->plus_btn->isChecked())
    {
        operand_1 += operand_2;
        ui->plus_btn->setChecked(false);
    }
    else if(ui->minus_btn->isChecked())
    {
        operand_1 -= operand_2;
        ui->minus_btn->setChecked(false);
    }
    else if(ui->multiple_btn->isChecked())
    {
        operand_1 *= operand_2;
        ui->multiple_btn->setChecked(false);
    }
    else if(ui->divide_btn->isChecked())
    {
        operand_2 == 0 ? 0 : operand_1 /= operand_2;
        ui->divide_btn->setChecked(false);
    }
    else
    {
        operand_1 = ui->output_window->text().toDouble();
    }

    ui->output_window->setText(QString::number(operand_1));
}

void MainWindow::math_operations()
{
    QPushButton* button = (QPushButton*) sender();
    button->setChecked(true);
    operand_1 = ui->output_window->text().toDouble();
    ui->output_window->setText(" ");
}
