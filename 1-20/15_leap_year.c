#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year);

int main(void)
{

    for (int y = 1900; y <= 2100; y++)
    {
        if (is_leap_year(y))
            printf("%d LEAP YEAR\n", y);
        else
            printf("%d\n", y);
    }

    return 0;
}

bool is_leap_year(int year)
{
    // Leap Year

    /*
    if (year is not divisible by 4)
        it is a common year
    else if (year is not divisible by 100)
        it is a leap year
    else if (year is not divisible by 400)
        it is a common year
    else
        it is a leap year
    */

    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else if (year % 400 != 0) return false;
    else return true;
}