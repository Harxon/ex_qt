#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditPasswd->setEchoMode(QLineEdit::Password);
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(checkForUser()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), qApp, SLOT(quit()));
    QObject::connect(ui->lineEditAccount, SIGNAL(returnPressed()), this, SLOT(checkForUser()));
    QObject::connect(ui->lineEditPasswd, SIGNAL(returnPressed()), this, SLOT(checkForUser()));
    QObject::connect(ui->pushButtonDisplay, SIGNAL(clicked(bool)), this, SLOT(on_pushButtonDisplay_clicked(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

char MainWindow::checkForUser(){
    if("admin" == ui->lineEditAccount->text() && "admin" == ui->lineEditPasswd->text()){
        QMessageBox::information(this, "SUCCESS", "I'm smiling~");
        return 'A';
    }else{
        QMessageBox::information(this, "ERROR", "Account or Passwd wrong, Please try again");
        return 'E';
    }
}

void MainWindow::on_pushButtonDisplay_clicked(bool checked)
{
        ui->lineEditPasswd->setEchoMode(QLineEdit::PasswordEchoOnEdit);
}
