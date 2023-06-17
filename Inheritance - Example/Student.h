#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    char *id;
    float finalCal;

public:
    Student(char *name, int age, char *_id, float _finalCal);
    ~Student();
    void viewStudent();
};

#endif
