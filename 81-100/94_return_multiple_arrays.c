#include <stdio.h>
#include <stdlib.h>

int *create_dynamic(int length);

int main(void)
{
    // Return Multiple Dynamically Allocated Arrays
    // From A Function

    int *array = create_dynamic(10);

    for (int i = 0; i < 10; i ++)
        printf("array[%d] = %d\n", i, array[i]);



    return 0;
}

int *create_dynamic(int length)
{
    int *a = malloc(sizeof(int) * length);
    for (int i = 0; i < length; i++) a[i] = i;
    return a;
}