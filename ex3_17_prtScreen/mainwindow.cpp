#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(enableTimerSlot()));
    QObject::connect(ui->buttonBox, SIGNAL(rejected()), qApp, SLOT(quit()));
    QObject::connect(ui->pushButtonSave, SIGNAL(clicked(bool)), this, SLOT(savePixmapFromActionSlot(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent* event){
    QMenu* menu = new QMenu;
    action = new QAction;
    QObject::connect(action, SIGNAL(triggered(bool)), this, SLOT(savePixmapFromActionSlot(bool)));
    action->setText("保存");
    menu->addAction(action);
    menu->exec(QCursor::pos());

    return;
}
int MainWindow::enableTimerSlot(){
    if(ui->checkBox->isChecked()){
        //this->hide();
        timer = new QTimer;
        QObject::connect(this->timer, SIGNAL(timeout()), this, SLOT(printScreenSlot()));
        timer->start(1000/24);
    }else{
        qApp->beep();
    }

    return 0;
}

int MainWindow::printScreenSlot(){
    this->pixMap = QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->label->setPixmap(this->pixMap.scaled(ui->label->size()));
    //this->timer->stop();
    //this->show();
    QClipboard* cpb = QApplication::clipboard();
    cpb->setPixmap(this->pixMap, QClipboard::Clipboard);

    return 0;
}

bool MainWindow::savePixmapFromActionSlot(bool c){
    QString filename = QFileDialog::getSaveFileName(this, "save file", QDir::currentPath());
    this->pixMap.save(filename);

    return c;
}
