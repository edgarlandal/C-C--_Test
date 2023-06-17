// My first program in C++
#include <stdlib.h>
#include <stdio.h>

#include "Date.h"

int main(int argc, char const *argv[])
{
    Date today(16, 6, 2023);
    today.viewDate();

    Date tomorrow(20230617);
    tomorrow.viewDate();

    return 0;
}
