#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(enableTimerSlot()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), qApp, SLOT(quit()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::enableTimerSlot(){
    if(ui->checkBox->isChecked()){
        this->hide();
        this->timer = new QTimer;
        QObject::connect(this->timer, SIGNAL(timeout()), this, SLOT(printScreenSlot()));
        this->timer->start(1*1000);
    }else{
        qApp->beep();
    }
    return 0;
}

int MainWindow::printScreenSlot(){
    this->pixMap = QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->label->setPixmap(this->pixMap.scaled(ui->label->size()));
    this->timer->stop();
    this->show();

    return 0;
}
