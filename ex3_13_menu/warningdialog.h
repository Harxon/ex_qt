#ifndef WARNINGDIALOG_H
#define WARNINGDIALOG_H

#include <QDialog>
#include <QMovie>
#include <QAbstractButton>
#include <QDebug>

namespace Ui {
class WarningDialog;
}

class WarningDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WarningDialog(QWidget *parent = 0);
    ~WarningDialog();

private:
    Ui::WarningDialog *ui;
    QMovie* movie;
private slots:
    void startGif();
    void stopGif();
};

#endif // WARNINGDIALOG_H
