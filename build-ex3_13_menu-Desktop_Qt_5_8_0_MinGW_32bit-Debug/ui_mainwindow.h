/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QAction *actionSetFont_T;
    QAction *actionSetColor;
    QAction *actionSetDateTime_D;
    QAction *actionAbout_Qt;
    QAction *actionOfficialWebsite_W;
    QAction *actionLICENSE_L;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFILE;
    QMenu *menuEDIT;
    QMenu *menuHELP;
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
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/qtEditIcon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSAVE_FILE_S->setIcon(icon);
        actionQUIT = new QAction(MainWindow);
        actionQUIT->setObjectName(QStringLiteral("actionQUIT"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionSelect = new QAction(MainWindow);
        actionSelect->setObjectName(QStringLiteral("actionSelect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/qtEditIcon/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect->setIcon(icon1);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/qtEditIcon/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon2);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        actionSetFont_T = new QAction(MainWindow);
        actionSetFont_T->setObjectName(QStringLiteral("actionSetFont_T"));
        actionSetColor = new QAction(MainWindow);
        actionSetColor->setObjectName(QStringLiteral("actionSetColor"));
        actionSetDateTime_D = new QAction(MainWindow);
        actionSetDateTime_D->setObjectName(QStringLiteral("actionSetDateTime_D"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionOfficialWebsite_W = new QAction(MainWindow);
        actionOfficialWebsite_W->setObjectName(QStringLiteral("actionOfficialWebsite_W"));
        actionLICENSE_L = new QAction(MainWindow);
        actionLICENSE_L->setObjectName(QStringLiteral("actionLICENSE_L"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 401, 271));
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/qtEditIcon/beautify_letter_background.jpg);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuFILE = new QMenu(menuBar);
        menuFILE->setObjectName(QStringLiteral("menuFILE"));
        menuEDIT = new QMenu(menuBar);
        menuEDIT->setObjectName(QStringLiteral("menuEDIT"));
        menuHELP = new QMenu(menuBar);
        menuHELP->setObjectName(QStringLiteral("menuHELP"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFILE->menuAction());
        menuBar->addAction(menuEDIT->menuAction());
        menuBar->addAction(menuHELP->menuAction());
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
        menuEDIT->addAction(actionSetFont_T);
        menuEDIT->addAction(actionSetColor);
        menuEDIT->addAction(actionSetDateTime_D);
        menuHELP->addAction(actionAbout_Qt);
        menuHELP->addAction(actionOfficialWebsite_W);
        menuHELP->addAction(actionLICENSE_L);
        mainToolBar->addAction(actionSAVE_FILE_S);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionSelect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNEW_FILE->setText(QApplication::translate("MainWindow", "NEW FILE(&N)", Q_NULLPTR));
        actionOPEN_FILE_O->setText(QApplication::translate("MainWindow", "OPEN FILE(&O)", Q_NULLPTR));
        actionSAVE_FILE_S->setText(QApplication::translate("MainWindow", "SAVE FILE(&S)", Q_NULLPTR));
        actionQUIT->setText(QApplication::translate("MainWindow", "QUIT(&Q)", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo(&Z)", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo(&Y)", Q_NULLPTR));
        actionSelect->setText(QApplication::translate("MainWindow", "Cut(&X)", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy(&C)", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste(&V)", Q_NULLPTR));
        actionSelectAll->setText(QApplication::translate("MainWindow", "SelectAll(&A)", Q_NULLPTR));
        actionSetFont_T->setText(QApplication::translate("MainWindow", "SetFont(&T)", Q_NULLPTR));
        actionSetColor->setText(QApplication::translate("MainWindow", "SetColor(&C)", Q_NULLPTR));
        actionSetDateTime_D->setText(QApplication::translate("MainWindow", "SetDateTime(&D)", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt(&Q)", Q_NULLPTR));
        actionOfficialWebsite_W->setText(QApplication::translate("MainWindow", "OfficialWebsite(&W)", Q_NULLPTR));
        actionLICENSE_L->setText(QApplication::translate("MainWindow", "LICENSE(&L)", Q_NULLPTR));
        menuFILE->setTitle(QApplication::translate("MainWindow", "FILE", Q_NULLPTR));
        menuEDIT->setTitle(QApplication::translate("MainWindow", "EDIT", Q_NULLPTR));
        menuHELP->setTitle(QApplication::translate("MainWindow", "HELP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
