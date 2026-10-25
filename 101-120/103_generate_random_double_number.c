#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_range(double min, double max);

int main(void)
{
    // Generate random double numbers

    // srand( time(NULL) );

    printf("%d\n", RAND_MAX);

    return 0;
}

double rand_range(double min, double max)
{
    double random = ((double) rand()) / RAND_MAX;
}