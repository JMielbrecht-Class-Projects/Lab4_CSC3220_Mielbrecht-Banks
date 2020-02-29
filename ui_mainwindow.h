/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QLabel *label_4;
    QTableView *tableView;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(890, 675);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 40, 49);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        secondLCD = new QLCDNumber(centralwidget);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(263, 30, 81, 71));
        secondLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        secondLCD->setDigitCount(2);
        secondLCD->setProperty("value", QVariant(22.000000000000000));
        minuteLCD = new QLCDNumber(centralwidget);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(173, 30, 81, 71));
        minuteLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        minuteLCD->setDigitCount(2);
        minuteLCD->setProperty("value", QVariant(22.000000000000000));
        hourLCD = new QLCDNumber(centralwidget);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(80, 30, 81, 71));
        hourLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        hourLCD->setDigitCount(2);
        hourLCD->setProperty("value", QVariant(22.000000000000000));
        imageDownloadButton = new QPushButton(centralwidget);
        imageDownloadButton->setObjectName(QString::fromUtf8("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(580, 60, 141, 31));
        imageDownloadButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
"color: rgb(238, 238, 238);"));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(430, 260, 401, 361));
        zipCodeInput = new QLineEdit(centralwidget);
        zipCodeInput->setObjectName(QString::fromUtf8("zipCodeInput"));
        zipCodeInput->setGeometry(QRect(430, 30, 113, 21));
        zipCodeInput->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        weatherLabel = new QLabel(centralwidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(530, 160, 311, 71));
        QFont font;
        font.setPointSize(14);
        weatherLabel->setFont(font);
        weatherLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
"color: rgb(238, 238, 238);"));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(430, 60, 141, 31));
        weatherDownloadButton->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
"color: rgb(238, 238, 238);"));
        weatherIconLabel = new QLabel(centralwidget);
        weatherIconLabel->setObjectName(QString::fromUtf8("weatherIconLabel"));
        weatherIconLabel->setGeometry(QRect(430, 160, 91, 71));
        weatherIconLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);"));
        london_HourLCD = new QLCDNumber(centralwidget);
        london_HourLCD->setObjectName(QString::fromUtf8("london_HourLCD"));
        london_HourLCD->setGeometry(QRect(130, 130, 51, 41));
        london_HourLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        london_HourLCD->setDigitCount(2);
        london_HourLCD->setProperty("value", QVariant(22.000000000000000));
        london_MinuteLCD = new QLCDNumber(centralwidget);
        london_MinuteLCD->setObjectName(QString::fromUtf8("london_MinuteLCD"));
        london_MinuteLCD->setGeometry(QRect(190, 130, 51, 41));
        london_MinuteLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        london_MinuteLCD->setDigitCount(2);
        london_MinuteLCD->setProperty("value", QVariant(22.000000000000000));
        london_SecondLCD = new QLCDNumber(centralwidget);
        london_SecondLCD->setObjectName(QString::fromUtf8("london_SecondLCD"));
        london_SecondLCD->setGeometry(QRect(250, 130, 51, 41));
        london_SecondLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        london_SecondLCD->setDigitCount(2);
        london_SecondLCD->setProperty("value", QVariant(22.000000000000000));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 100, 71, 21));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        paris_HourLCD = new QLCDNumber(centralwidget);
        paris_HourLCD->setObjectName(QString::fromUtf8("paris_HourLCD"));
        paris_HourLCD->setGeometry(QRect(133, 200, 51, 41));
        paris_HourLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        paris_HourLCD->setDigitCount(2);
        paris_HourLCD->setProperty("value", QVariant(22.000000000000000));
        paris_MinuteLCD = new QLCDNumber(centralwidget);
        paris_MinuteLCD->setObjectName(QString::fromUtf8("paris_MinuteLCD"));
        paris_MinuteLCD->setGeometry(QRect(190, 200, 51, 41));
        paris_MinuteLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        paris_MinuteLCD->setDigitCount(2);
        paris_MinuteLCD->setProperty("value", QVariant(22.000000000000000));
        paris_SecondLCD = new QLCDNumber(centralwidget);
        paris_SecondLCD->setObjectName(QString::fromUtf8("paris_SecondLCD"));
        paris_SecondLCD->setGeometry(QRect(250, 200, 51, 41));
        paris_SecondLCD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 173, 181);"));
        paris_SecondLCD->setDigitCount(2);
        paris_SecondLCD->setProperty("value", QVariant(22.000000000000000));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 169, 51, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 10, 251, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 120, 131, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 260, 401, 361));
        tableView->setAutoFillBackground(true);
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 62, 70);\n"
"color: rgb(238, 238, 238);"));
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableView->setShowGrid(true);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setMinimumSectionSize(35);
        tableView->horizontalHeader()->setDefaultSectionSize(200);
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setCascadingSectionResizes(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 0, 151, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 890, 21));
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
        imageDownloadButton->setText(QApplication::translate("MainWindow", "Get Traffic Data", nullptr));
        imageLabel->setText(QApplication::translate("MainWindow", "ImageLabel", nullptr));
        weatherLabel->setText(QApplication::translate("MainWindow", "WeatherLabel", nullptr));
        weatherDownloadButton->setText(QApplication::translate("MainWindow", "Get Weather Report", nullptr));
        weatherIconLabel->setText(QApplication::translate("MainWindow", "WeatherIcon", nullptr));
        label->setText(QApplication::translate("MainWindow", "London", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Paris", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Enter Zip Code (for Weather and Traffic data):", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Weather Report: ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Current Time", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
