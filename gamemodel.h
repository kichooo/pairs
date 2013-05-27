#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <QAbstractTableModel>

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
    void changeCard(qint32 row, qint32 col,qint32 card);
public slots:
    void newGame(qint32 rows, qint32 cols);
private:
    std::vector<std::vector<qint32 > > columns;
};



#endif // GAMEMODEL_H
