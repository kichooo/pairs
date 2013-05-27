#include "mainwindow.h"
#include "newgamedialog.h"
#include "helpdialog.h"
#include "ui_mainwindow.h"
#include "gamemodel.h"
#include "card.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this, SIGNAL(newGame(qint32,qint32)),&model, SLOT(newGame(qint32,qint32)));
    connect(&model, SIGNAL(resetAllCards()),this, SLOT(resetAllCards()));
    for (int i=0;i<4;i++) {
        map[i]=QImage(QDir::currentPath()+"/images/card" + QString::number(i),"png");
//        qDebug() << QDir::currentPath()+"/images/card" + QString::number(i);
    }

    newGame(6,3);
}
void MainWindow::onNewGameClicked() {
    NewGameDialog * dialog = new NewGameDialog(this);
    if(dialog->exec() == QDialog::Accepted){

            if (dialog->getResult()==Ui::EASY) {
                newGame(6,3);
            } else if (dialog->getResult()==Ui::MEDIUM) {
                newGame(7,4);
            } else
                newGame(8,5);
    #include <QMap>
      //QString bar = dialog.getFoo();
    }
}
void MainWindow::resetAllCards() {
    QGridLayout* layout = findChild<QGridLayout*>("gridLayout_2");
    QLayoutItem *child;
        while ((child = layout->takeAt(0)) != 0) {
        delete child->widget();
        delete child;
    }
    for (int i=0;i<model.columnCount();i++) {

        for (int j=0;j<model.rowCount();j++) {
            Card * c = new Card(i,j,map,this);
            layout  ->addWidget(c,i,j,Qt::AlignCenter);
        }


        }
    statusBar()->showMessage("QTAX");
}
void MainWindow::changeCard(qint32 row, qint32 col,qint32 card) {

}


void MainWindow::onHelpClicked() {
    HelpDialog * dialog = new HelpDialog(this);
    dialog->exec();
}
MainWindow::~MainWindow()
{
    delete ui;
}
