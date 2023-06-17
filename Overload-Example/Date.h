#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int day;
    int mouth;
    int year;
public:
    Date(int, int, int); // Contructor A
    Date(long ); // Contructor B
    void viewDate();
};

#endif