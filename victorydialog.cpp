#include "victorydialog.h"
#include "ui_victorydialog.h"

VictoryDialog::VictoryDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VictoryDialog)
{
    ui->setupUi(this);
}

VictoryDialog::~VictoryDialog()
{
    delete ui;
}
