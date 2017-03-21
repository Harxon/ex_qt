#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonOpenImage, SIGNAL(clicked(bool)), this, SLOT(openImageCreateSHMSlot()));
    connect(ui->pushButtonSetSHM, SIGNAL(clicked(bool)), this, SLOT(getImageFromSHMSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::openImageCreateSHMSlot(){
    int size;
    QImage image;
    QBuffer buffer;
    buffer.open(QBuffer::ReadWrite);
    QDataStream out(&buffer);
    ui->labelPix->setText(tr("Chose a image\n"));
    QString fileName = QFileDialog::getOpenFileName(0, QString(), QString(), tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "fileName: " << fileName;
    if(shm.isAttached()){
        qDebug()<<"isAttached\n";
        shm.detach();
    }else{}

    if(!image.load(fileName)){
        QMessageBox::information(this, "Error", "can't load image");
        return false;
    }else{
       //ui->labelPix->setPixmap(QPixmap::fromImage(image).scaled(ui->labelPix->size()));
       out << image;
       size = buffer.size();
       qDebug() << "buffer.size(): " << size;
       shm.setKey("shit");
       if(!shm.create(size)){
           QMessageBox::information(this, "Error", "can't create shm");
           qDebug() << shm.errorString();
           return false;
       }else{
           shm.lock();
           char* dts = (char*)shm.data();
           const char* src = buffer.buffer();
           qDebug() << "src:#" << src << "#";
           memcpy(dts, src, size);
           qDebug() << "dts:#" << dts << "#";
           shm.unlock();
           return true;
       }
       return true;
   }

   return true;
}

bool MainWindow::getImageFromSHMSlot(){
    QBuffer buffer;
    QImage image;
    QDataStream in(&buffer);
    if(!shm.attach()){
        ui->labelPix->setText(tr("There is no image shared into shm\n" \
                                 "Load a picture first\n"));
        return false;
    }else{

    }

    shm.lock();
    buffer.setData((const char*)shm.data(), shm.size());
    buffer.open(QBuffer::ReadOnly);
    qDebug() << "buffer:#" << buffer.buffer() << "#";
    in >> image;
    shm.unlock();

    ui->labelPix->setPixmap(QPixmap::fromImage(image));
    shm.detach();

    return true;
}
