#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QDesktopWidget>
#include <QTimer>
#include <QClipboard>
#include <QContextMenuEvent>
#include <QTextCodec>
#include <QCursor>
#include <QWidget>
#include <QFile>
#include <QFileDialog>
#include <QDesktopServices>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void contextMenuEvent(QContextMenuEvent* event);
private:
    Ui::MainWindow *ui;
    QTimer* timer;
    QPixmap pixMap;
    QAction* action;
private slots:
    int enableTimerSlot();
    int printScreenSlot();
    bool savePixmapFromActionSlot(bool);
};

#endif // MAINWINDOW_H
