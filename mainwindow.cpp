#include "mainwindow.h"
#include "newgamedialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("QSimulate has started");

}
void MainWindow::onNewGameClicked() {
    NewGameDialog * dialog = new NewGameDialog(this);
    dialog->exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
