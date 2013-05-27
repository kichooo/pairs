#ifndef VICTORYDIALOG_H
#define VICTORYDIALOG_H

#include <QDialog>

namespace Ui {
class VictoryDialog;
}

class VictoryDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit VictoryDialog(QWidget *parent = 0);
    ~VictoryDialog();
    
private:
    Ui::VictoryDialog *ui;
};

#endif // VICTORYDIALOG_H
