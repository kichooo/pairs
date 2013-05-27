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
    void monitorState(qint32 moves, qint32 total, qint32 left);
signals:
    void newGame(qint32 rows, qint32 cols);
private:
    Ui::MainWindow *ui;
    GameModel model;
    QMap<qint32,QImage> map;
};

#endif // MAINWINDOW_H
