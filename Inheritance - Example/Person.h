#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
    char* name;
    int age;

public:
    Person(char *_name, int _age);
    void viewData();
    int getAge();
    char* getName();
};

#endif