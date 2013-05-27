#include "card.h"

Card::Card(qint32 row,qint32 col, QMap<qint32,QImage> map,QWidget *parent) :
    QAbstractButton(parent) {
    type=0;
    this->map=map;
    this->row=row;
    this->col=col;
//    painter= new QPainter(this);
}
QSize Card::sizeHint () const {
    return QSize(80,120);
}
void Card::setType(qint32 type) {
    if (type!=this->type) {
        this->type=type;
        this->update();
    }


}
// rysowanie obiektu. Zależnie od typu, rysowane są różne obrazki
void Card::paintEvent(QPaintEvent *e) {
    QPainter painter(this);


    painter.drawImage(QRect(0,0,80,120),map[type],map[type].rect());
    painter.setRenderHint(QPainter::Antialiasing, true);
    QPen myPen(Qt::black, 2, Qt::SolidLine);
    painter.setPen(myPen);
    //painter.drawRect(QRect(1,1,78,118));
}
