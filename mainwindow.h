#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include "httpmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void setCurrentTime();
    void processImage(QPixmap *);
    void processWeatherIcon(QPixmap *);
    void processWeatherJson(QJsonObject* json);
    void on_imageDownloadButton_clicked();
    void on_weatherDownloadButton_clicked();
    void refreshWeather();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    httpManager *HTTPManager;
    bool weatherGrabbed;
    QString icon; //WEATHER ICON

};
#endif // MAINWINDOW_H


// Delete this Comment later
