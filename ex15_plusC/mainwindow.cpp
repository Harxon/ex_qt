#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("calc...");
    QObject::connect(ui->calcButton, SIGNAL(clicked(bool)), this, SLOT(getTwoLineEditString()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getTwoLineEditString(){
    QString s1 = ui->firstLineEdit->text();
    QString s2 = ui->secondLineEdit->text();
    bool ok = false;

    int a = s1.toInt(&ok, 10);
    int b = s2.toInt(&ok, 10);
    if(ui->comboBox->currentIndex() == 0){
        ui->anwserLineEdit->setText(this->plusTwoInteger(a, b));
    }else if(ui->comboBox->currentIndex() == 1){
        ui->anwserLineEdit->setText(this->minusTwoInteger(a, b));
    }else if(ui->comboBox->currentIndex() == 2){
        ui->anwserLineEdit->setText(this->multiTwoInteger(a, b));
    }else if(ui->comboBox->currentIndex() == 3){
        ui->anwserLineEdit->setText(this->divideTwoInteger(a, b));
    }
}

QString& MainWindow::plusTwoInteger(int a, int b){
    int c = a + b;
    resultStr.setNum(c);

    return resultStr;
}

QString& MainWindow::minusTwoInteger(int a, int b){
    int c = a - b;
    resultStr.setNum(c);

    return resultStr;
}
QString& MainWindow::multiTwoInteger(int a, int b){
    int c = a * b;
    resultStr.setNum(c);

    return resultStr;
}
QString& MainWindow::divideTwoInteger(int a, int b){
    if(b ==  0){
        QMessageBox::information(this, "Error", "Wrong divider");
        return resultStr.setNum(0);
    }
    int c = a / b;

    return resultStr.setNum(c);
}

