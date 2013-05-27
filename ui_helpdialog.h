/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName(QStringLiteral("HelpDialog"));
        HelpDialog->setWindowModality(Qt::ApplicationModal);
        HelpDialog->resize(400, 330);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HelpDialog->sizePolicy().hasHeightForWidth());
        HelpDialog->setSizePolicy(sizePolicy);
        HelpDialog->setMinimumSize(QSize(400, 330));
        HelpDialog->setMaximumSize(QSize(400, 330));
        label = new QLabel(HelpDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 151, 30));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(HelpDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 381, 231));
        label_2->setLocale(QLocale(QLocale::Polish, QLocale::Poland));
        label_2->setWordWrap(true);
        pushButton = new QPushButton(HelpDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 290, 99, 27));

        retranslateUi(HelpDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), HelpDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QApplication::translate("HelpDialog", "Dialog", 0));
        label->setText(QApplication::translate("HelpDialog", "Witaj w Pairs!", 0));
        label_2->setText(QApplication::translate("HelpDialog", "<html><head/><body><p>Jest to gra \304\207wicz\304\205ca szybko\305\233\304\207 oraz pami\304\231\304\207. Zasady s\304\205 bardzo proste - nalezy sparowa\304\207 ze sob\304\205 takie same rysunki. Po klikniciu symbolu grzbietu pojawi si\304\231 rysunek pod nim schowany. Aby po\305\202\304\205czy\304\207 go w par\304\231, kliknij na grzbiet, pod kt\303\263rym twoim zdaniem znajduje si\304\231 jego brat-bli\305\272niak.</p><p>Zwyci\304\231stwo jest osi\304\205gane pod ods\305\202oni\304\231ciu wszystkich obrazk\303\263w. Liczba pr\303\263b jest nieograniczona, ale decyduje o liczbie zdobytych punkt\303\263w karnych.</p></body></html>", 0));
        pushButton->setText(QApplication::translate("HelpDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
