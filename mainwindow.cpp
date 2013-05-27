#include "mainwindow.h"
#include "newgamedialog.h"
#include "helpdialog.h"
#include "ui_mainwindow.h"
#include "gamemodel.h"
#include "victorydialog.h"
#include "card.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this, SIGNAL(newGame(qint32,qint32)),&model, SLOT(newGame(qint32,qint32)));
    connect(&model, SIGNAL(resetAllCards()),this, SLOT(resetAllCards()));
    connect(&model, SIGNAL(stateChanged(qint32,qint32,qint32)),this, SLOT(monitorState(qint32,qint32,qint32)));
    for (int i=0;i<7;i++) {
        map[i]=QImage(QDir::currentPath()+"/images/card" + QString::number(i),"png");
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
    }
}
void MainWindow::monitorState(qint32 moves, qint32 total, qint32 left) {
    statusBar()->showMessage("Wykonano ruchów: " + QString::number(moves) + ". Zostało " + QString::number(left) + "/" + QString::number(total) );
    if (left==0) {
        VictoryDialog * dialog = new VictoryDialog(this);
        dialog->exec();
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
            layout  ->addWidget(c,i,j);
            connect(c, SIGNAL(cardClicked(qint32,qint32)),&model, SLOT(clickedCard(qint32,qint32)));
            connect(&model, SIGNAL(changeCard(qint32,qint32,qint32)),c, SLOT(setType(qint32,qint32,qint32)));
        }


        }

}

void MainWindow::onHelpClicked() {
    HelpDialog * dialog = new HelpDialog(this);
    dialog->exec();
}
MainWindow::~MainWindow()
{
    delete ui;
}
