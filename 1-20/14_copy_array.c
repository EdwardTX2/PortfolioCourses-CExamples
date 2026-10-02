#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);

int main(void)
{
    // Copy an array

    // 1. if you know size of array
    int a[5] = {1,2,3,4,5};
    int copy[5];

    for (int i = 0; i < 5; i++)
        copy[i] = a[i];

    for (int i = 0; i < 5; i++)
        printf("copy[%d]=%d\n", i, copy[i]);


    // 2. Don't know size of array?
    // include stdlib.h

    int b1[] = {1,2,3,4,5};
    int b2[] = {99,50,30,70,80,90,100,50};

    int *b1_copy = array_copy(b1, 5);
    int *b2_copy = array_copy(b2, 8);

    for (int i = 0; i < 5; i++)
    {
        printf("b1_copy[%d]=%d\n", i, b1_copy[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("b2_copy[%d]=%d\n", i, b2_copy[i]);
    }

    printf("\n");
    printf("b1: %p\nb1_copy: %p\n", b1, b1_copy);

    return 0;
}

int *array_copy(int *array, int length)
{
    int *c = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
    {
        c[i] = array[i];
    }
    return c;
}