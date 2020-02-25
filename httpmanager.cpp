#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>

httpManager::httpManager(QObject *parent) : QObject(parent),
    imageDownloadManager(new QNetworkAccessManager),
    weatherAPIManager(new QNetworkAccessManager)
{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply)));
}

httpManager::~httpManager()
{
    delete imageDownloadManager;
    delete weatherAPIManager;
}

void httpManager::sendImageRequest()
{
    QNetworkRequest request;
    request.setUrl(QUrl("https://spu.edu/depts/uc/VIS/images/Screen/JPEG/logo-spu-legacy-maroon.jpg"));
    imageDownloadManager->get(request);
    qDebug() << "Image Request Sent to Address " << request.url();
}

void httpManager::sendWeatherRequest(QString zip)
{
    QNetworkRequest request;

    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
            + zip
            + "98119,us&units=imperial&appid=3ced85ae80d0f4c78c0ca224ddefcd0e";
    request.setUrl(QUrl(address));
    weatherAPIManager->get(request);
    qDebug() << "Weather Request Sent to Address" << request.url();
}

void httpManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Image Reply has Arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download  was Successful";
    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit ImageReady(image);
}

void httpManager::WeatherDownloadHandler(QNetworkReply *reply)
{
    qDebug() << "Weather Reply has Arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download  was Successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherJsonReady(jsonObj);
}

void httpManager::processWeatherJson(QJsonObject *json)
{
    qDebug() << json->value("weather");
}
