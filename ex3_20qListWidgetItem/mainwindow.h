#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QStringList>
#include <QFileDialog>

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
    QListWidgetItem* itemp;
private slots:
    void addCityItemSlot();
    void deleteCiteItemAllSlot();
    void showDirectoryFileSlot();
};

#endif // MAINWINDOW_H
