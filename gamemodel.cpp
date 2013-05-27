#include "gamemodel.h"
#include <QDebug>

GameModel::GameModel(QObject *parent) :
    QAbstractTableModel(parent) {
}

void GameModel::newGame(qint32 rows, qint32 cols) {
    columns.clear();
    for (int i=0;i<cols;i++) {
        std::vector<qint32>  column;
        for (int j=0;j<rows;j++) {
            column.push_back(0);
        }
        columns.push_back(column);
    }
    resetAllCards();
}

int GameModel::rowCount(const QModelIndex& parent) const
{
    if (columnCount(parent)>0)
        return columns[0].size();
    else return 0;
}
int GameModel::columnCount(const QModelIndex& parent) const
{
  return columns.size();
}

QVariant GameModel::data(const QModelIndex& index, int role) const
{
  return QVariant::Invalid;
}


