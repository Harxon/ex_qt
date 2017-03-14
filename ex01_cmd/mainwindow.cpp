#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setMaximumSize(393, 171);
    this->setMinimumSize(393, 171);

    QObject::connect(ui->pushButton1, SIGNAL(clicked(bool)), this, SLOT(changeWindowTitle()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeWindowTitle(){
    this->setWindowTitle("Title has changed");
}
