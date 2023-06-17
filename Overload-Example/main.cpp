// My first program in C++
#include <stdlib.h>
#include <stdio.h>

#include "Date.h"
#include "Time.h"

int main(int argc, char const *argv[])
{
    Date today(16, 6, 2023);
    today.viewDate();

    Date tomorrow(20230617);
    tomorrow.viewDate();

    Time now(6,51,0);
    now.viewTime();

    Time time_set(23000);
    time_set.viewTime();
    return 0;
}
