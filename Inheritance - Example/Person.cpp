#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Person.h"

Person::Person(char *_name, int _age)
{
    name = (char*)malloc(sizeof(name));
    strcpy(name, _name);
    age = _age;
}

void Person::viewData(){
    printf("Name : %s\nAge : %d", name, age);

}
char* Person::getName(){
    return name;
}

int Person::getAge(){
    return age;
}