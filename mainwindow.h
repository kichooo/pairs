#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>
#include <QScrollArea>
#include <QPushButton>
#include <QMap>
#include <QDebug>
#include "newgamedialog.h"
#include "gamemodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();
public slots:
    void onNewGameClicked();
    void onHelpClicked();
    void resetAllCards();
    void changeCard(qint32 row, qint32 col,qint32 card);
signals:
    void newGame(qint32 rows, qint32 cols);
    void clickedCard(qint32 row, qint32 col);
private:
    Ui::MainWindow *ui;
    GameModel model;
    QMap<qint32,QImage> map;
};

#endif // MAINWINDOW_H
