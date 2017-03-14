#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <time.h>
//#include <delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
private slots:
    void myChangeTitle(QString context);
signals:
    void myGetSignals();
};

#endif // MAINWINDOW_H
