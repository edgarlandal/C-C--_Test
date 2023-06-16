#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "persona.h"

Persona::Persona(char *_name, int _age)
{
    name = (char*)malloc(sizeof(name));
    strcpy(name, _name);
    age = _age;
}

char* Persona::getName(){
    return name;
}

int Persona::getAge(){
    return age;
}