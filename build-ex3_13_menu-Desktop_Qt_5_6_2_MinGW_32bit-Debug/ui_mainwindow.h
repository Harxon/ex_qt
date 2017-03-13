/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNEW_FILE;
    QAction *actionOPEN_FILE_O;
    QAction *actionSAVE_FILE_S;
    QAction *actionQUIT;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSelect;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QMenu *menuEDIT;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNEW_FILE = new QAction(MainWindow);
        actionNEW_FILE->setObjectName(QStringLiteral("actionNEW_FILE"));
        actionOPEN_FILE_O = new QAction(MainWindow);
        actionOPEN_FILE_O->setObjectName(QStringLiteral("actionOPEN_FILE_O"));
        actionSAVE_FILE_S = new QAction(MainWindow);
        actionSAVE_FILE_S->setObjectName(QStringLiteral("actionSAVE_FILE_S"));
        actionQUIT = new QAction(MainWindow);
        actionQUIT->setObjectName(QStringLiteral("actionQUIT"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName(QStringLiteral("actionSelect"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 431, 281));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuFILE = new QMenu(menuBar);
        menuFILE->setObjectName(QStringLiteral("menuFILE"));
        menuEDIT = new QMenu(menuBar);
        menuEDIT->setObjectName(QStringLiteral("menuEDIT"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFILE->menuAction());
        menuBar->addAction(menuEDIT->menuAction());
        menuFILE->addAction(actionNEW_FILE);
        menuFILE->addAction(actionOPEN_FILE_O);
        menuFILE->addAction(actionSAVE_FILE_S);
        menuFILE->addSeparator();
        menuFILE->addAction(actionQUIT);
        menuEDIT->addAction(actionUndo);
        menuEDIT->addAction(actionRedo);
        menuEDIT->addAction(actionSelect);
        menuEDIT->addAction(actionCopy);
        menuEDIT->addAction(actionPaste);
        menuEDIT->addAction(actionSelectAll);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNEW_FILE->setText(QApplication::translate("MainWindow", "NEW FILE(&N)", 0));
        actionOPEN_FILE_O->setText(QApplication::translate("MainWindow", "OPEN FILE(&O)", 0));
        actionSAVE_FILE_S->setText(QApplication::translate("MainWindow", "SAVE FILE(&S)", 0));
        actionQUIT->setText(QApplication::translate("MainWindow", "QUIT(&Q)", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo(&Z)", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo(&Y)", 0));
        actionSelect->setText(QApplication::translate("MainWindow", "Cut(&X)", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy(&C)", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste(&V)", 0));
        actionSelectAll->setText(QApplication::translate("MainWindow", "SelectAll(&A)", 0));
        menuFILE->setTitle(QApplication::translate("MainWindow", "FILE", 0));
        menuEDIT->setTitle(QApplication::translate("MainWindow", "EDIT", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
