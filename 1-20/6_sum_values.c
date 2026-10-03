#include <stdio.h>

int sum(int array[], int length);

int main(void)
{
    int a1[] = {1,2,6,9,8,7,6,5};
    int a2[] = {100};
    int a3[] = {99,99};
    int a4[] = {50,-50,100,-100,200,-200};

    printf("a1 sum: %d\n", sum(a1, 8));
    printf("a2 sum: %d\n", sum(a2, 1));
    printf("a3 sum: %d\n", sum(a3, 2));
    printf("a4 sum: %d\n", sum(a4, 6));

    return 0;
}

int sum(int array[], int length)
{
    int sum_value = 0;
    for (int i = 0; i < length; i++)
        sum_value += array[i];
    
    return sum_value;
}