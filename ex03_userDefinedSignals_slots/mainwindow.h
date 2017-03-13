#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
    void closeThisWindow();
    void setThisWindowTitle(QString context);
signals:
    void closeWindow(QString context);
};

#endif // MAINWINDOW_H
