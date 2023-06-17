#ifndef DOG_H
#define DOG_H

class Dog
{
private:
    char* name;
    char* race;
public:
    Dog(char* _name, char* race);
    ~Dog();

    void viewDog();
};

#endif