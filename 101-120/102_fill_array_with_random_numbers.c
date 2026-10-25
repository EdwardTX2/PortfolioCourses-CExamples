#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_random(int array[], int length, int max);

int main(void)
{
    // Fill an array with random numbers

    srand( time(NULL) );

    int a[100];
    fill_random(a, 100, 200);

    for (int i = 0; i < 100; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\n");

    return 0;
}

void fill_random(int array[], int length, int max)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = (rand() % max) + 1;
    }
}