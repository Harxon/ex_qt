#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(getLineEditCmd()));
    this->connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(getLineEditCmd()));
    this->connect(ui->lineEdit, SIGNAL(textEdited(QString)), this, SLOT(setButtonEnable(QString)));
    this->setMaximumSize(430, 260);
    this->setMinimumSize(430, 260);
    this->move(0, 768- 340);
    ui->buttonBox->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getLineEditCmd(){
    QProcess* process = new QProcess;
    QString s = ui->lineEdit->text();
    process->start(s.trimmed());
    this->close();
}

void MainWindow::setButtonEnable(QString){
    this->setWindowTitle("typing...");
    ui->buttonBox->setEnabled(true);
}
