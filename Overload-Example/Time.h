#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int, int, int);
    Time(long);
    void viewTime();
};

#endif