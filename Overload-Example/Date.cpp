#include <stdio.h>
#include <stdlib.h>

#include "Date.h"

Date::Date(int _day, int _mouth, int _year) // Contructor A
{
    day = _day;
    mouth = _mouth;
    year = _year;
}

Date::Date(long date)
{
    year = int(date/10000);
    mouth = int((date - year * 10000)/100);
    day = int(date - year * 10000 - mouth * 100);
}

void Date::viewDate(){
    printf("%d/%d/%d\n", day, mouth, year);
}