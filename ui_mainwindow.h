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
        imageDownloadButton->setGeometry(QRect(10, 90, 141, 31));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(10, 120, 261, 141));
        zipCodeInput = new QLineEdit(centralwidget);
        zipCodeInput->setObjectName(QString::fromUtf8("zipCodeInput"));
        zipCodeInput->setGeometry(QRect(160, 90, 113, 21));
        weatherLabel = new QLabel(centralwidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(380, 140, 331, 81));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(380, 90, 141, 31));
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
        imageDownloadButton->setText(QCoreApplication::translate("MainWindow", "Image Download Display", nullptr));
        imageLabel->setText(QCoreApplication::translate("MainWindow", "ImageLabel", nullptr));
        weatherLabel->setText(QCoreApplication::translate("MainWindow", "WeatherLabel", nullptr));
        weatherDownloadButton->setText(QCoreApplication::translate("MainWindow", "Weather Download Button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
