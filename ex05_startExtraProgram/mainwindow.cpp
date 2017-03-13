#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*
     *  QProcess *myProcess = new QProcess(parent);
     *  myProcess->start(program, arguments);
     */
    QProcess* process = new QProcess;
    QString s = ui->lineEdit->text();

    process->start(s.trimmed());
}
