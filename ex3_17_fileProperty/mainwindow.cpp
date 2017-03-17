#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButtonOpenFile, SIGNAL(clicked(bool)), this, SLOT(getFileInfo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

char MainWindow::getFileInfo(){
    QString fileName;
    QFile* file;
    QString buf;
    QString temp_h,temp_l;
    long long int ret;
    bool b;

    fileName = QFileDialog::getOpenFileName(this, "getOpenFileName", QDir::currentPath());
    if(fileName.isEmpty()){
        QMessageBox::information(this, "Error", "Can't get fileName");
        return 'E';
    }
    file = new QFile;
    file->setFileName(fileName);
    bool ok = file->open(QIODevice::ReadWrite);
    if(ok){
        QFileInfo info(fileName);
        b = info.isSymLink();          // returns true
        buf = info.absoluteFilePath();   // returns fileAbsoluteFilePath
        ret = info.size();               // returns file size in bytes

       //info.symLinkTarget();      // returns "/opt/pretty++/bin/untabify"
    }else{
        QMessageBox::information(this, "Error", "Can't open " + fileName);
        return 'E';
    }
    if(b){
        ui->textEdit->append("isSymLink: true");
    }else{
        ui->textEdit->append("isSymLink: false");
    }
    ui->textEdit->append("absoluteFilePath: " + buf);

    if(ret){
        ui->textEdit->append("size > 0");
    }else{
        ui->textEdit->append("size <= 0");
    }

    temp_h.setNum(ret/1024/1024);
    temp_l.setNum(ret/1024%1024);
    ui->textEdit->append("size: " + temp_h + "." + temp_l + "k");

    return 'A';
}
