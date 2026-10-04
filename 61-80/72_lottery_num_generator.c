#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    // Lottery Number Generator
    // Example: 7 14 21 33 42 55

    // Seed the random number generator
    srand(time(NULL));

    int number;
    int numbers[6];
    bool unique;

    printf("Numbers: ");
    for (int i = 0; i < 6; i++)
    {
        do {
            number = (rand() % 59) + 1;
            unique = true;
            for (int j = 0; j < i; j++)
                if (numbers[j] == number) unique = false;
        } while (!unique);
        numbers[i] = number;
        printf("%d ");
    }
    printf("\n");


    return 0;
}