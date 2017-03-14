#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("NotePad");
    QObject::connect(ui->actionNew_N, SIGNAL(triggered(bool)), this, SLOT(getMenuTriggered()));
    QObject::connect(ui->actionOpen_O, SIGNAL(triggered(bool)), this, SLOT(openFileSlot()));
    QObject::connect(ui->actionSave_S, SIGNAL(triggered(bool)), this, SLOT(saveFileSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getMenuTriggered(){
    if(ui->textEdit->document()->isModified()){
        qDebug() << "isModified";
        this->setWindowTitle("isModified");
    }else{
        qDebug() << "UnModified";
        this->setWindowTitle("UnModified");
    }
}
void MainWindow::openFileSlot(){
    QString fileName = QFileDialog::getOpenFileName(this, "OpenFileName", QDir::currentPath());

    if(!fileName.isEmpty()){
       QFile* newFile = new QFile;
        newFile->setFileName(fileName);
        bool ok = newFile->open(QIODevice::ReadOnly);
        if(ok){
            QTextStream in(newFile);
            ui->textEdit->setText(in.readAll());
            newFile->close();
            delete newFile;
        }
    }else{
        QMessageBox::information(this, "Error Message", "The file isEmpty");
        return;
    }
}

void MainWindow::saveFileSlot(){
    QString fileName = QFileDialog::getSaveFileName(this, "SaveFileName", QDir::currentPath());
    if(!fileName.isEmpty()){
        QFile* newFile = new QFile;
        newFile->setFileName(fileName);
        bool ok = newFile->open(QIODevice::WriteOnly);
        if(ok){
            QTextStream out(newFile);
            out << ui->textEdit->toPlainText();
            newFile->close();
            delete newFile;
        }else{
            QMessageBox::information(this, "Error openFile", "openFileError");
            return ;
        }
    }else{
       QMessageBox::information(this, "Error saveFileText", "saveTextError");
       return ;
    }
}
