#include <stdio.h>

int main()
{
    // Fizz Buzz problem

    for (int i = 1; i<= 30; i++)
    {
        if (i % 5 == 0 && i % 3 == 0)
            printf("Fizz Buzz\n", i);
        else if (i % 5 == 0)
            printf("Buzz\n", i);
        else if (i % 3 == 0)
            printf("Fizz\n", i);
        else printf("%i\n", i);
    }
}