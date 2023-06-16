// My first program in C++
#include <stdlib.h>
#include <stdio.h>

#include "persona.h"

int main(int argc, char const *argv[])
{
    const char *name = "edgar";

    Persona persona((char *)name, 23);
    printf("Name : %s\n", persona.getName());
    printf("Age : %d\n", persona.getAge());

    return 0;
}
