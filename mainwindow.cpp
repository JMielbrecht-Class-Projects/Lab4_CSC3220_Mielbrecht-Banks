#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonObject>
#include <QJsonArray>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      timer(new QTimer),
      HTTPManager(new httpManager)
{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    setCurrentTime();
    timer->start(1000);

    connect(HTTPManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    connect(HTTPManager, SIGNAL(WeatherJsonReady(QJsonObject* )),
            this, SLOT(processWeatherJson(QJsonObject* )));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCurrentTime()
{
    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);
}

void MainWindow::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void MainWindow::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    double temp = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temp;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->weatherLabel->setText("Current weather: " + weather + ", temp: " + QString::number(temp));

    /*
     * {
     * "coord":{"lon":-122.36,"lat":47.64},
     * "weather":[{"id":804,"main":"Clouds","description":"overcast clouds","icon":"04n"}],
     * "base":"stations",
     * "main":{"temp":46.22,"feels_like":42.55,"temp_min":42.01,"temp_max":50,"pressure":1033,"humidity":81},
     * "visibility":16093,
     * "wind":{"speed":2.84,"deg":149},
     * "clouds":{"all":90},"dt":1582771378,
     * "sys":{"type":1,"id":2674,"country":"US","sunrise":1582728994,
     * "sunset":1582768114},
     * "timezone":-28800,
     * "id":0,
     * "name":"Seattle",
     * "cod":200
     * }
     */
}

void MainWindow::on_imageDownloadButton_clicked()
{
    QString zip = ui->zipCodeInput->text();
    qDebug() << zip;
    HTTPManager->sendImageRequest(zip);
}

void MainWindow::on_weatherDownloadButton_clicked()
{
    QString zip = ui->zipCodeInput->text();
    qDebug() << zip;
    HTTPManager->sendWeatherRequest(zip);
}
