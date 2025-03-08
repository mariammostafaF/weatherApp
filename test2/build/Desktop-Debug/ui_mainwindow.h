/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *countrylbl;
    QComboBox *countryComboBox;
    QPushButton *gobtn;
    QGroupBox *groupBox;
    QLabel *desciptionlbl;
    QLabel *lblDescriptionlogo;
    QLabel *lbltemp;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lblwind;
    QLabel *label_8;
    QLabel *lblhum;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *lblcity;
    QLabel *lblcoun;
    QLabel *label_14;
    QLabel *lblFL;
    QLabel *label_2;
    QLabel *lblMax;
    QLabel *label_7;
    QLabel *lblMin;
    QPushButton *statisticsbtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(993, 737);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        countrylbl = new QLabel(centralwidget);
        countrylbl->setObjectName(QString::fromUtf8("countrylbl"));
        countrylbl->setGeometry(QRect(10, 50, 67, 17));
        countryComboBox = new QComboBox(centralwidget);
        countryComboBox->setObjectName(QString::fromUtf8("countryComboBox"));
        countryComboBox->setGeometry(QRect(80, 50, 371, 21));
        gobtn = new QPushButton(centralwidget);
        gobtn->setObjectName(QString::fromUtf8("gobtn"));
        gobtn->setGeometry(QRect(460, 50, 89, 25));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 80, 541, 301));
        desciptionlbl = new QLabel(groupBox);
        desciptionlbl->setObjectName(QString::fromUtf8("desciptionlbl"));
        desciptionlbl->setGeometry(QRect(70, 30, 211, 21));
        lblDescriptionlogo = new QLabel(groupBox);
        lblDescriptionlogo->setObjectName(QString::fromUtf8("lblDescriptionlogo"));
        lblDescriptionlogo->setGeometry(QRect(350, 30, 181, 17));
        lbltemp = new QLabel(groupBox);
        lbltemp->setObjectName(QString::fromUtf8("lbltemp"));
        lbltemp->setGeometry(QRect(16, 70, 161, 81));
        QFont font;
        font.setPointSize(50);
        lbltemp->setFont(font);
        lbltemp->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 60, 16, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 110, 31, 31));
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(340, 200, 71, 17));
        lblwind = new QLabel(groupBox);
        lblwind->setObjectName(QString::fromUtf8("lblwind"));
        lblwind->setGeometry(QRect(430, 200, 21, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 240, 71, 17));
        lblhum = new QLabel(groupBox);
        lblhum->setObjectName(QString::fromUtf8("lblhum"));
        lblhum->setGeometry(QRect(430, 240, 21, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(270, 90, 131, 20));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(270, 130, 141, 20));
        lblcity = new QLabel(groupBox);
        lblcity->setObjectName(QString::fromUtf8("lblcity"));
        lblcity->setGeometry(QRect(450, 80, 67, 17));
        lblcoun = new QLabel(groupBox);
        lblcoun->setObjectName(QString::fromUtf8("lblcoun"));
        lblcoun->setGeometry(QRect(450, 120, 67, 17));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(70, 190, 67, 17));
        lblFL = new QLabel(groupBox);
        lblFL->setObjectName(QString::fromUtf8("lblFL"));
        lblFL->setGeometry(QRect(180, 190, 51, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 230, 41, 17));
        lblMax = new QLabel(groupBox);
        lblMax->setObjectName(QString::fromUtf8("lblMax"));
        lblMax->setGeometry(QRect(180, 230, 51, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 270, 31, 17));
        lblMin = new QLabel(groupBox);
        lblMin->setObjectName(QString::fromUtf8("lblMin"));
        lblMin->setGeometry(QRect(180, 270, 51, 17));
        statisticsbtn = new QPushButton(centralwidget);
        statisticsbtn->setObjectName(QString::fromUtf8("statisticsbtn"));
        statisticsbtn->setGeometry(QRect(10, 410, 121, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 993, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        countrylbl->setText(QApplication::translate("MainWindow", "Country", nullptr));
        gobtn->setText(QApplication::translate("MainWindow", "Go", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Current Weather", nullptr));
        desciptionlbl->setText(QApplication::translate("MainWindow", "Weather Description", nullptr));
        lblDescriptionlogo->setText(QApplication::translate("MainWindow", "Weather Logo", nullptr));
        lbltemp->setText(QApplication::translate("MainWindow", "17", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "o", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "C", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Wind", nullptr));
        lblwind->setText(QApplication::translate("MainWindow", "20", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Humidity", nullptr));
        lblhum->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "City", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Country Code", nullptr));
        lblcity->setText(QApplication::translate("MainWindow", "Chicago", nullptr));
        lblcoun->setText(QApplication::translate("MainWindow", "USA", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Feels like", nullptr));
        lblFL->setText(QApplication::translate("MainWindow", "17.5", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Max", nullptr));
        lblMax->setText(QApplication::translate("MainWindow", "17", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Min", nullptr));
        lblMin->setText(QApplication::translate("MainWindow", "14", nullptr));
        statisticsbtn->setText(QApplication::translate("MainWindow", "Show Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
