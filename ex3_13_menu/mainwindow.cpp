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

    QObject::connect(ui->actionSetFont_T, SIGNAL(triggered(bool)), this, SLOT(setFontSlot()));
    QObject::connect(ui->actionSetColor, SIGNAL(triggered(bool)), this, SLOT(setColorSlot()));

    QObject::connect(ui->actionSetDateTime_D, SIGNAL(triggered(bool)), this, SLOT(setDataTimeSlot()));

    QObject::connect(ui->actionAbout_Qt, SIGNAL(triggered(bool)), qApp, SLOT(aboutQt()));
    QObject::connect(ui->actionOfficialWebsite_W, SIGNAL(triggered(bool)), this, SLOT(openOfficialWebsite()));
    QObject::connect(ui->actionLICENSE_L, SIGNAL(triggered(bool)), this, SLOT(openWarningDialog()));

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

void MainWindow::setFontSlot(){
    /*
     *   bool ok;
         QFont font = QFontDialog::getFon(&ok, QFont("Helvetica [Cronyx]", 10), this);
  if (ok) {
      // the user clicked OK and font is set to the font the user selected
  } else {
      // the user canceled the dialog; font is set to the initial
      // value, in this case Helvetica [Cronyx], 10
  }
     */
    bool ok;
    //QFont font = QFontDialog::getFont(&ok, QFont("Helvetica [Cronyx]", 14), this);
    QFont font = QFontDialog::getFont(&ok, QFont("Timess", 14), this);
    if(ok){
        ui->textEdit->setFont(font);
    }else{
        QMessageBox::information(this, "Error", "setFont failed");
        return;
    }
}

void MainWindow::setColorSlot(){
    //QColor color = QColorDialog::getColor(Qt::blue, this, "setColor", QColorDialog::ColorDialogOption());
    QColor color = QColorDialog::getColor(Qt::blue, this);
    if(color.isValid()){
      ui->textEdit->setTextColor(color);
    }else{
      QMessageBox::information(this, "Error", "setColor failed");
      return;
    }
}

void MainWindow::setDataTimeSlot(){
    QDateTime time(QDateTime::currentDateTime());
    QString timeText(time.toString("HH:mm:ss yyyy.MM.dd"));
    ui->textEdit->append(timeText);
}

void MainWindow::openOfficialWebsite(){

    QDesktopServices::openUrl(QUrl("https://www.qt.io/"));
}

void MainWindow::openWarningDialog(){
    WarningDialog* dialog = new WarningDialog;
    dialog->show();
}
