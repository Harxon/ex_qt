#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->actionNEW_FILE, SIGNAL(triggered(bool)), this, SLOT(newFileSlot()));
    QObject::connect(ui->actionOPEN_FILE_O, SIGNAL(triggered(bool)), this, SLOT(openFileSlot()));
    QObject::connect(ui->actionSAVE_FILE_S, SIGNAL(triggered(bool)), this, SLOT(saveFileSlot()));
    QObject::connect(ui->actionQUIT, SIGNAL(triggered(bool)), this, SLOT(close()));
    QObject::connect(ui->actionUndo, SIGNAL(triggered(bool)), ui->textEdit, SLOT(undo()));
    QObject::connect(ui->actionRedo, SIGNAL(triggered(bool)), ui->textEdit, SLOT(redo()));
    QObject::connect(ui->actionSelect, SIGNAL(triggered(bool)), ui->textEdit, SLOT(cut()));
    QObject::connect(ui->actionCopy, SIGNAL(triggered(bool)), ui->textEdit, SLOT(copy()));
    QObject::connect(ui->actionPaste, SIGNAL(triggered(bool)), ui->textEdit, SLOT(paste()));
    QObject::connect(ui->actionSelectAll, SIGNAL(triggered(bool)), ui->textEdit, SLOT(selectAll()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFileSlot(){
    if(ui->textEdit->document()->isEmpty()){
        this->setWindowTitle("TextEditIsEmpty");
    }else if(ui->textEdit->document()->isModified()){
        QMessageBox::information(this, "TextIsModified", "TextEditIsModified");
    }
}

void MainWindow::openFileSlot(){
    QString name = QFileDialog::getOpenFileName(this, "openFileName", QDir::currentPath());
    if(name.isEmpty()){
        QMessageBox::information(this, "nameGetWrong", "Can't get filename");
        return;
    }else{}
    QFile* file = new QFile;
    file->setFileName(name);
    bool ok = file->open(QIODevice::ReadOnly);
    if(ok){
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;

    }else{
        QMessageBox::information(this, "FileOpen", "Can't open the file");
        return;
    }
}

void MainWindow::saveFileSlot(){
    QString name = QFileDialog::getSaveFileName(this, "saveFileName", QDir::currentPath());
    if(name.isEmpty()){
        QMessageBox::information(this, "Save File", "Can't save file, something is wrong");
        return;
    }else{}
    QFile* file = new QFile;
    file->setFileName(name);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok){
        QTextStream out(file);
        out << ui->textEdit->toPlainText();
        file->close();
        delete file;
    }else{
        QMessageBox::information(this, "saveFile", "Can't open the savefile");
        return;
    }
}
