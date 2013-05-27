#include "newgamedialog.h"
#include "ui_newgamedialog.h"

NewGameDialog::NewGameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewGameDialog)
{
    ui->setupUi(this);
}
void NewGameDialog::accept() {
    if (ui->comboBox->currentIndex()==0) result=Ui::HARD;
    else if (ui->comboBox->currentIndex()==1) result=Ui::MEDIUM;
    else result=Ui::EASY;
    done(QDialog::Accepted);
}

Ui::Result NewGameDialog::getResult() {
    return result;
}

NewGameDialog::~NewGameDialog()
{
    delete ui;
}
