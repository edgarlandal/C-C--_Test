#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "Dog.h"

using namespace std;

Dog::Dog(char* _name, char* _race)
{
    name = (char*)malloc(sizeof(_name));
    race = (char*)malloc(sizeof(_race));

    strcpy(name, _name);
    strcpy(race, _race);
}

Dog::~Dog()
{
}

void Dog::viewDog(){
    printf("Name : %s\nRace : %s \n", name , race);
}
