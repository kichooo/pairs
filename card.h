#ifndef CARD_H
#define CARD_H

#include <QAbstractButton>
#include <QPainter>
#include <QPen>
#include <QDir>
#include <QDebug>


class Card : public QAbstractButton
{
    Q_OBJECT
public:
    explicit Card(qint32 row,qint32 col, QMap<qint32,QImage> map,QWidget *parent = 0);
    QSize sizeHint () const;

signals:
    void cardClicked(qint32 row,qint32 col);
public slots:
    void setType(qint32 row, qint32 col,qint32 type);
    void wasClicked();
protected:
    void paintEvent(QPaintEvent *e);
private:
      int type;
      QMap<qint32,QImage> map;
      qint32 row, col;
//    QPainter* painter;
//    QPen * pen;
};

#endif // CARD_H
