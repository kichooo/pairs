#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <QAbstractTableModel>
#include <QTime>
#include <QTimer>

class GameModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit GameModel(QObject *parent = 0);
    int rowCount ( const QModelIndex & parent = QModelIndex() ) const;

    int columnCount ( const QModelIndex & parent = QModelIndex() ) const;

    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const;

signals:
    void resetAllCards();
    void changeCard(qint32 row, qint32 col,qint32 type);
    void stateChanged(qint32 moves, qint32 total, qint32 left);
public slots:
    void newGame(qint32 rows, qint32 cols);
    void clickedCard(qint32 row, qint32 col);
    void postDel();

private:
    std::vector<std::vector<qint32 > > columns;
    int randInt(int low, int high);
    qint32 lastX1,lastY1,lastX2,lastY2,type,total,moves,left;

};



#endif // GAMEMODEL_H
