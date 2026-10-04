#include <stdio.h>
#include <stdlib.h>

int compare(const void *x_void, const void *y_void);

int main()
{
    // Qsort an Array
    int a[] = {8,7,2,4,6,3,5,1,9,0};
    int length = 10;

    printf("Array: ");
    for (int i = 0; i < length; i ++)
        printf("%d ", a[i]);
    printf("\n");

    qsort(a, length, sizeof(int), compare);

    printf("Array: ");
    for (int i = 0; i < length; i ++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

int compare(const void *x_void, const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    // return x - y; // smallest to largest
    return y - x; // largest to smallest
}