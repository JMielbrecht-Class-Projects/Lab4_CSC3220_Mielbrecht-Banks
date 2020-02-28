#include "tasklistmodel.h"
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

TaskListModel::TaskListModel(QObject* parent)
{

}
int TaskListModel::rowCount(const QModelIndex &parent) const
{
    return taskNames.size();
}

int TaskListModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

QVariant TaskListModel::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){
        switch(index.column()){
        case 0:
            return taskNames.at(index.row());
        case 1:
            return dueDates.at(index.row());
        }

//        return QString("Row%1, Row%2")
//                .arg(index.row())
//                .arg(index.column());
    }
    return QVariant();
}

void TaskListModel::openFile(QString filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(0, "error", file.errorString());
        return;
    }

    QTextStream in(&file);

    taskNames.clear();
    dueDates.clear();

    for(int i = 0; !in.atEnd(); i++){
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if(i == 0) continue;

        for(int j = 0; j < fields.length(); j++){
            std::cout << "[" << j << "]" << fields[j].toStdString();
        }
        std::cout  << std::endl;

        taskNames.push_back(fields[0]);
        dueDates.push_back(fields[1]);
    }
    file.close();

    emit layoutChanged();

}
