#include "warningdialog.h"
#include "ui_warningdialog.h"

WarningDialog::WarningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WarningDialog)
{
    ui->setupUi(this);
    this->movie = new QMovie("bean.gif");
    if(movie->isValid()){
        qDebug() << "The movie is isValid\n";
    }else{
        qDebug() << "The movie can't be used\n";
    }
    ui->labelForGif->setMovie(this->movie);
    //this->movie->start();
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(startGif()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(stopGif()));

}

WarningDialog::~WarningDialog()
{
    delete ui;
}
void WarningDialog::startGif(){
    movie->start();
}
void WarningDialog::stopGif(){
    movie->stop();
}
