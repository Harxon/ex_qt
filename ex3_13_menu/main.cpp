#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QPixmap pixmap("timg.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
    sleep(2);

    w.show();
    splash.finish(&w);

    return a.exec();
}
