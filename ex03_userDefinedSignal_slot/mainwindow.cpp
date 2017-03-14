#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QObject::connect(this, SIGNAL(this->getChange()), SLOT(this->changeTitle()));
    QObject::connect(this, SIGNAL(myGetSignals()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::myChangeTitle(QString context){
    qDebug()<<context;
    sleep(14);
    emit this->myGetSignals();
}
