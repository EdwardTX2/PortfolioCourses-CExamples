#include <stdio.h>
#include <stdbool.h>

bool is_even(int num1);

int main()
{
    // Check if integer is Even or Odd

    if (is_even(11))
        printf("It's even!\n");
    else
        printf("It's odd!\n");

    return 0;
}

bool is_even(int num1)
{
    return (num1 % 2 == 0);
}