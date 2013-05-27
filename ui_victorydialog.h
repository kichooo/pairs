/********************************************************************************
** Form generated from reading UI file 'victorydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VICTORYDIALOG_H
#define UI_VICTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VictoryDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *VictoryDialog)
    {
        if (VictoryDialog->objectName().isEmpty())
            VictoryDialog->setObjectName(QStringLiteral("VictoryDialog"));
        VictoryDialog->resize(400, 300);
        label = new QLabel(VictoryDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 111, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(VictoryDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 311, 121));
        label_2->setWordWrap(true);
        pushButton = new QPushButton(VictoryDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 260, 99, 27));

        retranslateUi(VictoryDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), VictoryDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(VictoryDialog);
    } // setupUi

    void retranslateUi(QDialog *VictoryDialog)
    {
        VictoryDialog->setWindowTitle(QApplication::translate("VictoryDialog", "Dialog", 0));
        label->setText(QApplication::translate("VictoryDialog", "Gratulacje!", 0));
        label_2->setText(QApplication::translate("VictoryDialog", "Wygra\305\202e\305\233 gr\304\231. Pami\304\231taj, \305\274e zawsze mo\305\274esz by\304\207 lepszy. S\304\205 te\305\274 wy\305\274sze poziomy trudno\305\233ci.", 0));
        pushButton->setText(QApplication::translate("VictoryDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class VictoryDialog: public Ui_VictoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICTORYDIALOG_H
