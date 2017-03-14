#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(changeWindowTitleSlots()));
    QObject::connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(changeWindowTitleSlots()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::changeWindowTitleSlots(){
    /*
     * QProcess *myProcess = new QProcess(parent);
     * myProcess->start(program, arguments);
     *
    */
    QProcess* process = new QProcess;
    QString s = ui->lineEdit->text();
    process->start(s.trimmed());
}
