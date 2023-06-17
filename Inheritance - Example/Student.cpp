#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "Student.h"

Student::Student(char *_name, int _age, char *_id, float _finalCal) : Person(_name, _age)
{
    id = (char *)malloc(sizeof(_id));
    strcpy(id, _id);
    finalCal = _finalCal;
}

Student::~Student()
{
}

void Student::viewStudent()
{
    viewData();
    printf("\nID : %s\nFinal Cal: %f", id, finalCal);
}