#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QPixmap>
#include <QString>
#include <QBuffer>
#include <QDataStream>
#include <QSharedMemory>
#include <string.h>
#include <QtGlobal>
#include <unistd.h>
#include <QDebug>

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
    QSharedMemory shm;
public slots:
    bool openImageCreateSHMSlot();
    bool getImageFromSHMSlot();
};

#endif // MAINWINDOW_H
