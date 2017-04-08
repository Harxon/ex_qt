#include "clock.h"
#include <QDateTime>
Clock::Clock(QWidget *parent):QLCDNumber(parent),showingColonFlag(true)
{
    showTime();
    startTimer(1000);
}

void Clock::timerEvent(QTimerEvent* event)
{
    showTime();
}

void Clock::showTime()
{
    QString time = QTime::currentTime().toString().left(5);
    if (!showingColonFlag)
    {
        time[2] = ' ';
    }else{}

    display(time);
    showingColonFlag =! showingColonFlag;
}
