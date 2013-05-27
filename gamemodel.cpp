#include "gamemodel.h"
#include <QDebug>

GameModel::GameModel(QObject *parent) :
    QAbstractTableModel(parent) {
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
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
    lastX1=-1;lastY1=-1;
    type=-2;
    for (int i=0;i<cols;i++) {
        for (int j=0;j<rows;j++) {
            columns[i][j]=1+((i*rows+j)/2)%6;
            }
        }
    // 200 rounds of randoming
    for (int i=0;i<200;i++) {
        int candRow=randInt(0,rows-1);
        int candCol=randInt(0,cols-1);
        int candRow2=randInt(0,rows-1);
        int candCol2=randInt(0,cols-1);
        int temp=columns[candCol][candRow];
        columns[candCol][candRow]=columns[candCol2][candRow2];
        columns[candCol2][candRow2]=temp;

    }



    resetAllCards();
    moves=0;
    total=cols*rows;
    left=total;
    stateChanged(moves,total,left);


}
int GameModel::randInt(int low, int high)
    {
    return qrand() % ((high + 1) - low) + low;
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
void GameModel::postDel() {
    moves+=1;
    changeCard(lastX1,lastY1,type);
    changeCard(lastX2,lastY2,type);
    if (type<0) {
        left-=2;
        stateChanged(moves,total,left);
    }
    type=-2;
    lastX1=-1;
}

void GameModel::clickedCard(qint32 row, qint32 col) {
    if (type!=-2) return;
    if (lastX1>=0 && lastY1>=0) {
        if (lastX1==row && lastY1 == col) return;
        lastX2=row;
        lastY2=col;
        changeCard(row,col,columns[row][col]);
        if (columns[row][col]==columns[lastX1][lastY1]) {
            // user was correct
            type=-1;
            QTimer::singleShot(500, this, SLOT(postDel()));

        } else {
              type=0;
              QTimer::singleShot(500, this, SLOT(postDel()));
//            changeCard(row,col,0);

//            changeCard(lastX,lastY,0);
            // was wrong
        }


    } else {
        changeCard(row,col,columns[row][col]);
        lastX1=row;
        lastY1=col;
    }
//    columns[row][col]=1;

}

