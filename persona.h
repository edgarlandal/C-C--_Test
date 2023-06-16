#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
private:
    char* name;
    int age;

public:
    Persona(char *_name, int _age);
    int getAge();
    char* getName();
};

#endif