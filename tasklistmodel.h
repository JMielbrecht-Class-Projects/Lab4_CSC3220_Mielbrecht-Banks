#ifndef TASKLISTMODEL_H
#define TASKLISTMODEL_H


#include <QAbstractTableModel>
#include <vector>

class TaskListModel: public QAbstractTableModel
{
public:
    TaskListModel(QObject* parent);

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    void openFile(QString filePath);

private:
    std::vector<QString> taskNames;
    std::vector<QString> dueDates;
};
#endif // TASKLISTMODEL_H
