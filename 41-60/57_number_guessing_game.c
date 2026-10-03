#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Number Guessing Game

    // Seed the random number generator
    srand(time(NULL));

    // Generate the numbers
    int number = (rand() % 100) + 1; // Random between 1 and 100
    int guess = 0;

    do {
        printf("Enter a Guess: ");
        scanf("%d", &guess);

        if (guess == number) printf("You got it!\n");
        else if (guess < number) printf("Too low!\n");
        else printf("Too high!\n");

    } while(guess != number);

    return 0;
}