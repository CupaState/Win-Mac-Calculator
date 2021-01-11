/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *output_window;
    QPushButton *AC_btn;
    QPushButton *plus_minus_btn;
    QPushButton *percent_btn;
    QPushButton *seven_btn;
    QPushButton *eight_btn;
    QPushButton *nine_btn;
    QPushButton *four_btn;
    QPushButton *five_btn;
    QPushButton *six_btn;
    QPushButton *divide_btn;
    QPushButton *multiple_btn;
    QPushButton *minus_btn;
    QPushButton *one_btn;
    QPushButton *two_btn;
    QPushButton *three_btn;
    QPushButton *plus_btn;
    QPushButton *zero_btn;
    QPushButton *dot_btn;
    QPushButton *equals_btn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(239, 369);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        output_window = new QLabel(centralwidget);
        output_window->setObjectName(QString::fromUtf8("output_window"));
        output_window->setGeometry(QRect(0, 0, 241, 61));
        output_window->setBaseSize(QSize(241, 61));
        output_window->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border: 1px solid gray;\n"
"	background-color: white;\n"
"	font-size: 20px;\n"
"	qproperty-alignment: \"AlignVCenter | AlignRight\";\n"
"	padding: 10px;\n"
"}\n"
""));
        AC_btn = new QPushButton(centralwidget);
        AC_btn->setObjectName(QString::fromUtf8("AC_btn"));
        AC_btn->setGeometry(QRect(0, 70, 60, 60));
        AC_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"								stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        plus_minus_btn = new QPushButton(centralwidget);
        plus_minus_btn->setObjectName(QString::fromUtf8("plus_minus_btn"));
        plus_minus_btn->setGeometry(QRect(60, 70, 60, 60));
        plus_minus_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"								stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        percent_btn = new QPushButton(centralwidget);
        percent_btn->setObjectName(QString::fromUtf8("percent_btn"));
        percent_btn->setGeometry(QRect(120, 70, 60, 60));
        percent_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"								stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        seven_btn = new QPushButton(centralwidget);
        seven_btn->setObjectName(QString::fromUtf8("seven_btn"));
        seven_btn->setGeometry(QRect(0, 130, 60, 60));
        seven_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        eight_btn = new QPushButton(centralwidget);
        eight_btn->setObjectName(QString::fromUtf8("eight_btn"));
        eight_btn->setGeometry(QRect(60, 130, 60, 60));
        eight_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        nine_btn = new QPushButton(centralwidget);
        nine_btn->setObjectName(QString::fromUtf8("nine_btn"));
        nine_btn->setGeometry(QRect(120, 130, 60, 60));
        nine_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        four_btn = new QPushButton(centralwidget);
        four_btn->setObjectName(QString::fromUtf8("four_btn"));
        four_btn->setGeometry(QRect(0, 190, 60, 60));
        four_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        five_btn = new QPushButton(centralwidget);
        five_btn->setObjectName(QString::fromUtf8("five_btn"));
        five_btn->setGeometry(QRect(60, 190, 60, 60));
        five_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        six_btn = new QPushButton(centralwidget);
        six_btn->setObjectName(QString::fromUtf8("six_btn"));
        six_btn->setGeometry(QRect(120, 190, 60, 60));
        six_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        divide_btn = new QPushButton(centralwidget);
        divide_btn->setObjectName(QString::fromUtf8("divide_btn"));
        divide_btn->setGeometry(QRect(180, 70, 60, 60));
        divide_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        multiple_btn = new QPushButton(centralwidget);
        multiple_btn->setObjectName(QString::fromUtf8("multiple_btn"));
        multiple_btn->setGeometry(QRect(180, 130, 60, 60));
        multiple_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        minus_btn = new QPushButton(centralwidget);
        minus_btn->setObjectName(QString::fromUtf8("minus_btn"));
        minus_btn->setGeometry(QRect(180, 190, 60, 60));
        minus_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        one_btn = new QPushButton(centralwidget);
        one_btn->setObjectName(QString::fromUtf8("one_btn"));
        one_btn->setGeometry(QRect(0, 250, 60, 60));
        one_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        two_btn = new QPushButton(centralwidget);
        two_btn->setObjectName(QString::fromUtf8("two_btn"));
        two_btn->setGeometry(QRect(60, 250, 60, 60));
        two_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        three_btn = new QPushButton(centralwidget);
        three_btn->setObjectName(QString::fromUtf8("three_btn"));
        three_btn->setGeometry(QRect(120, 250, 60, 60));
        three_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        plus_btn = new QPushButton(centralwidget);
        plus_btn->setObjectName(QString::fromUtf8("plus_btn"));
        plus_btn->setGeometry(QRect(180, 250, 60, 60));
        plus_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        zero_btn = new QPushButton(centralwidget);
        zero_btn->setObjectName(QString::fromUtf8("zero_btn"));
        zero_btn->setGeometry(QRect(0, 310, 121, 60));
        zero_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"background-color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, \n"
"									stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        dot_btn = new QPushButton(centralwidget);
        dot_btn->setObjectName(QString::fromUtf8("dot_btn"));
        dot_btn->setGeometry(QRect(120, 310, 60, 60));
        dot_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"								stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        equals_btn = new QPushButton(centralwidget);
        equals_btn->setObjectName(QString::fromUtf8("equals_btn"));
        equals_btn->setGeometry(QRect(180, 310, 60, 60));
        equals_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(215, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: qlineargradient(x1:0, x2:0, y1:0, y2:1,\n"
"									stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        output_window->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        AC_btn->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        plus_minus_btn->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        percent_btn->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        seven_btn->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eight_btn->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine_btn->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        four_btn->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        five_btn->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six_btn->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        divide_btn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        multiple_btn->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        minus_btn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        one_btn->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        two_btn->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three_btn->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        zero_btn->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        dot_btn->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equals_btn->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
