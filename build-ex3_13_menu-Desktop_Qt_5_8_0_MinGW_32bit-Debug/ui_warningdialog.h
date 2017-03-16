/********************************************************************************
** Form generated from reading UI file 'warningdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WarningDialog
{
public:
    QLabel *label;
    QLabel *labelForGif;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WarningDialog)
    {
        if (WarningDialog->objectName().isEmpty())
            WarningDialog->setObjectName(QStringLiteral("WarningDialog"));
        WarningDialog->resize(400, 300);
        label = new QLabel(WarningDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 0, 251, 41));
        labelForGif = new QLabel(WarningDialog);
        labelForGif->setObjectName(QStringLiteral("labelForGif"));
        labelForGif->setGeometry(QRect(10, 30, 351, 221));
        buttonBox = new QDialogButtonBox(WarningDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 270, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(WarningDialog);

        QMetaObject::connectSlotsByName(WarningDialog);
    } // setupUi

    void retranslateUi(QDialog *WarningDialog)
    {
        WarningDialog->setWindowTitle(QApplication::translate("WarningDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("WarningDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; font-style:italic; color:#ff0000;\">Look out!Ouch!!!</span></p></body></html>", Q_NULLPTR));
        labelForGif->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WarningDialog: public Ui_WarningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
