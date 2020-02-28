/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QLCDNumber *secondLCD;
    QLCDNumber *minuteLCD;
    QLCDNumber *hourLCD;
    QPushButton *imageDownloadButton;
    QLabel *imageLabel;
    QLineEdit *zipCodeInput;
    QLabel *weatherLabel;
    QPushButton *weatherDownloadButton;
    QLabel *weatherIconLabel;
    QLCDNumber *london_HourLCD;
    QLCDNumber *london_MinuteLCD;
    QLCDNumber *london_SecondLCD;
    QLabel *label;
    QLCDNumber *paris_HourLCD;
    QLCDNumber *paris_MinuteLCD;
    QLCDNumber *paris_SecondLCD;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        secondLCD = new QLCDNumber(centralwidget);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(193, 10, 81, 71));
        secondLCD->setDigitCount(2);
        secondLCD->setProperty("value", QVariant(22.000000000000000));
        minuteLCD = new QLCDNumber(centralwidget);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(103, 10, 81, 71));
        minuteLCD->setDigitCount(2);
        minuteLCD->setProperty("value", QVariant(22.000000000000000));
        hourLCD = new QLCDNumber(centralwidget);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(10, 10, 81, 71));
        hourLCD->setDigitCount(2);
        hourLCD->setProperty("value", QVariant(22.000000000000000));
        imageDownloadButton = new QPushButton(centralwidget);
        imageDownloadButton->setObjectName(QString::fromUtf8("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(170, 140, 141, 31));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(450, 230, 351, 331));
        zipCodeInput = new QLineEdit(centralwidget);
        zipCodeInput->setObjectName(QString::fromUtf8("zipCodeInput"));
        zipCodeInput->setGeometry(QRect(20, 110, 113, 21));
        weatherLabel = new QLabel(centralwidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(480, 90, 281, 21));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(20, 140, 141, 31));
        weatherIconLabel = new QLabel(centralwidget);
        weatherIconLabel->setObjectName(QString::fromUtf8("weatherIconLabel"));
        weatherIconLabel->setGeometry(QRect(330, 80, 141, 121));
        london_HourLCD = new QLCDNumber(centralwidget);
        london_HourLCD->setObjectName(QString::fromUtf8("london_HourLCD"));
        london_HourLCD->setGeometry(QRect(290, 10, 51, 41));
        london_HourLCD->setDigitCount(2);
        london_HourLCD->setProperty("value", QVariant(22.000000000000000));
        london_MinuteLCD = new QLCDNumber(centralwidget);
        london_MinuteLCD->setObjectName(QString::fromUtf8("london_MinuteLCD"));
        london_MinuteLCD->setGeometry(QRect(350, 10, 51, 41));
        london_MinuteLCD->setDigitCount(2);
        london_MinuteLCD->setProperty("value", QVariant(22.000000000000000));
        london_SecondLCD = new QLCDNumber(centralwidget);
        london_SecondLCD->setObjectName(QString::fromUtf8("london_SecondLCD"));
        london_SecondLCD->setGeometry(QRect(410, 10, 51, 41));
        london_SecondLCD->setDigitCount(2);
        london_SecondLCD->setProperty("value", QVariant(22.000000000000000));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 60, 47, 16));
        paris_HourLCD = new QLCDNumber(centralwidget);
        paris_HourLCD->setObjectName(QString::fromUtf8("paris_HourLCD"));
        paris_HourLCD->setGeometry(QRect(473, 10, 51, 41));
        paris_HourLCD->setDigitCount(2);
        paris_HourLCD->setProperty("value", QVariant(22.000000000000000));
        paris_MinuteLCD = new QLCDNumber(centralwidget);
        paris_MinuteLCD->setObjectName(QString::fromUtf8("paris_MinuteLCD"));
        paris_MinuteLCD->setGeometry(QRect(530, 10, 51, 41));
        paris_MinuteLCD->setDigitCount(2);
        paris_MinuteLCD->setProperty("value", QVariant(22.000000000000000));
        paris_SecondLCD = new QLCDNumber(centralwidget);
        paris_SecondLCD->setObjectName(QString::fromUtf8("paris_SecondLCD"));
        paris_SecondLCD->setGeometry(QRect(590, 10, 51, 41));
        paris_SecondLCD->setDigitCount(2);
        paris_SecondLCD->setProperty("value", QVariant(22.000000000000000));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 60, 41, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 251, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        imageDownloadButton->setText(QCoreApplication::translate("MainWindow", "Get Traffic Data", nullptr));
        imageLabel->setText(QCoreApplication::translate("MainWindow", "ImageLabel", nullptr));
        weatherLabel->setText(QCoreApplication::translate("MainWindow", "WeatherLabel", nullptr));
        weatherDownloadButton->setText(QCoreApplication::translate("MainWindow", "Get Weather Report", nullptr));
        weatherIconLabel->setText(QCoreApplication::translate("MainWindow", "WeatherIcon", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "London", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Paris", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Zip Code (for Weather and Traffic data):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
