#include <stdio.h>

int main()
{
    // Sum the digits of a number

    int number = 0;
    int sum = 0;
    int digit = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    // 237
    // 237 % 10 -> 7
    // 237 / 10 -> 23
    //
    // 23 % 10 -> 3
    // 23 / 10 -> 2
    //
    // 2 % 10 -> 2
    // 2 / 10 -> 0

    while (number != 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("sum: %d\n", sum);

    return 0;
}