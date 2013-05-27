/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNowa_gra_2;
    QAction *actionWyj_cie;
    QAction *actionPomoc;
    QAction *actionO_autorze;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QMenuBar *menuBar;
    QMenu *menuGra;
    QMenu *menuPomoc;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(728, 437);
        MainWindow->setMinimumSize(QSize(480, 320));
        actionNowa_gra_2 = new QAction(MainWindow);
        actionNowa_gra_2->setObjectName(QStringLiteral("actionNowa_gra_2"));
        actionWyj_cie = new QAction(MainWindow);
        actionWyj_cie->setObjectName(QStringLiteral("actionWyj_cie"));
        actionPomoc = new QAction(MainWindow);
        actionPomoc->setObjectName(QStringLiteral("actionPomoc"));
        actionO_autorze = new QAction(MainWindow);
        actionO_autorze->setObjectName(QStringLiteral("actionO_autorze"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 708, 370));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setAutoFillBackground(false);
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_2->addLayout(gridLayout_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 728, 25));
        menuGra = new QMenu(menuBar);
        menuGra->setObjectName(QStringLiteral("menuGra"));
        menuPomoc = new QMenu(menuBar);
        menuPomoc->setObjectName(QStringLiteral("menuPomoc"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGra->menuAction());
        menuBar->addAction(menuPomoc->menuAction());
        menuGra->addAction(actionNowa_gra_2);
        menuGra->addAction(actionWyj_cie);
        menuPomoc->addAction(actionPomoc);
        menuPomoc->addAction(actionO_autorze);

        retranslateUi(MainWindow);
        QObject::connect(actionWyj_cie, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionNowa_gra_2, SIGNAL(triggered()), MainWindow, SLOT(onNewGameClicked()));
        QObject::connect(actionPomoc, SIGNAL(triggered()), MainWindow, SLOT(onHelpClicked()));
        QObject::connect(MainWindow, SIGNAL(toolButtonStyleChanged(Qt::ToolButtonStyle)), MainWindow, SLOT(onHelpClicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pairs", 0));
        actionNowa_gra_2->setText(QApplication::translate("MainWindow", "Nowa gra", 0));
        actionWyj_cie->setText(QApplication::translate("MainWindow", "Wyj\305\233cie", 0));
        actionWyj_cie->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        actionPomoc->setText(QApplication::translate("MainWindow", "Pomoc", 0));
        actionO_autorze->setText(QApplication::translate("MainWindow", "O autorze", 0));
        menuGra->setTitle(QApplication::translate("MainWindow", "Gra", 0));
        menuPomoc->setTitle(QApplication::translate("MainWindow", "Pomoc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
