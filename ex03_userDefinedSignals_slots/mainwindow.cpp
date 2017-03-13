#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->slotSignals, SIGNAL(clicked(bool)), this, SLOT(closeThisWindow()));
    QObject::connect(this, SIGNAL(closeWindow(QString)), qApp, SLOT(quit()));
    QObject::connect(this, SIGNAL(closeWindow(QString)), this, SLOT(setThisWindowTitle(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeThisWindow(){
    qDebug()<<"closeThisWindow";
   //this->setWindowTitle("HELLO");
    sleep(1);
    emit this->closeWindow("This window will close");
    sleep(4);
}
void MainWindow::setThisWindowTitle(QString context){
    this->setWindowTitle(context);
}
