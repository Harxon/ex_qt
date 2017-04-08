#include <QApplication>

#include "clock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Clock* clock = new Clock;
    clock->show();

    return a.exec();
}
