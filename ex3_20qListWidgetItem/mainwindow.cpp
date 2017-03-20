#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonAdd, SIGNAL(clicked(bool)), this, SLOT(addCityItemSlot()));
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(addCityItemSlot()));
    connect(ui->pushButtonDeleteAll, SIGNAL(clicked(bool)), this, SLOT(deleteCiteItemAllSlot()));
}

MainWindow::~MainWindow()
{
    deleteCiteItemAllSlot();
    delete ui;
}

void MainWindow::addCityItemSlot(){
    itemp = new QListWidgetItem;
    itemp->setText(ui->lineEdit->text());
    ui->listWidget->addItem(itemp);
    ui->lineEdit->clear();
}
void MainWindow::deleteCiteItemAllSlot(){
    QListWidgetItem* itemp_left;
    int row = 0;
    while(1){
        itemp_left = ui->listWidget->takeItem(row);
        if(itemp_left){
            delete itemp_left;
        }else{
            break;
        }
    };

}
