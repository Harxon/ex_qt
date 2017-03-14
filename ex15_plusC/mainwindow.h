#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString& plusTwoInteger(int a, int b);
    QString& minusTwoInteger(int a, int b);
    QString& multiTwoInteger(int a, int b);
    QString& divideTwoInteger(int a, int b);

private:
    Ui::MainWindow *ui;
    QString resultStr;
private slots:
    void getTwoLineEditString();
};

#endif // MAINWINDOW_H
