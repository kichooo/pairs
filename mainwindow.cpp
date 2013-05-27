#include "mainwindow.h"
#include "newgamedialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
void MainWindow::onNewGameClicked() {
    NewGameDialog * dialog = new NewGameDialog(this);
    if(dialog->exec() == QDialog::Accepted){

            if (dialog->getResult()==Ui::MEDIUM) {
                statusBar()->showMessage("Nowa gra medium");
            } else {
                statusBar()->showMessage("Nowa gra ss");
            }

      //QString bar = dialog.getFoo();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
