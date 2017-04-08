#ifndef CLOCK_H
#define CLOCK_H

#include <QLCDNumber>
class Clock:public QLCDNumber
{
public:
    Clock(QWidget *parent=0);
protected:
    void timerEvent(QTimerEvent *event);
private:
    void showTime();
    bool showingColonFlag;
};
#endif // CLOCK_H
