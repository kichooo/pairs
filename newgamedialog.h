#ifndef NEWGAMEDIALOG_H
#define NEWGAMEDIALOG_H

#include <QDialog>

namespace Ui {
enum Result {
    EASY,
    MEDIUM,
    HARD
};
class NewGameDialog;
}

class NewGameDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewGameDialog(QWidget *parent = 0);
    Ui::Result getResult();
    ~NewGameDialog();
public slots:
    virtual void accept();
private:
    Ui::NewGameDialog *ui;
    Ui::Result result;
};

#endif // NEWGAMEDIALOG_H
