#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QLabel* label = new QLabel;
    label->setText("<h2><i>hello</i> <font color = red>World</font></h2>");
    label->show();

    return a.exec();
}
