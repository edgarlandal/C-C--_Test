#include "Dog.h"

int main(int argc, char const *argv[])
{
    Dog dog((char*)"Gracy", (char*)"Pitbull");

    dog.viewDog();

    dog.~Dog();

    dog.viewDog();

    return 0;
}
