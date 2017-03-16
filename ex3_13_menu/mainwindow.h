#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QDateTime>
#include <unistd.h>
#include <QUrl>
#include <QDesktopServices>
#include <warningdialog.h>

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
    void newFileSlot();
    void openFileSlot();
    void saveFileSlot();
    void setFontSlot();
    void setColorSlot();
    void setDataTimeSlot();
    void openOfficialWebsite();
    void openWarningDialog();
};

#endif // MAINWINDOW_H
