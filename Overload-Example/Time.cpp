#include <stdio.h>
#include <stdlib.h>

#include "Time.h"

Time::Time(int _hours, int _minutes, int _seconds)
{
    hours = _hours;
    minutes = _minutes;
    seconds = _seconds;
}

Time::Time(long time)
{
    hours = time / 3600;
    time %= 3600;
    minutes = time / 60;
    seconds = time % 60;
}

void Time::viewTime()
{
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}