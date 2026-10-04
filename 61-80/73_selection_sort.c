#include <stdio.h>

int main()
{
    // Selection Sort
    //
    // Find smallest int in array and swap it 
    // with the int at index 0
    // Then repeat with int at index 1, and so on.

    int a[] = {5,9,7,6,4,0,2,3,8,1};
    int length = 10;

    printf("Before: ");
    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);
    printf("\n");

    for (int i = 0; i < length - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < length; j++)
            if (a[j] < a[min_pos]) min_pos = j;

        if (min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }

    printf("After:  ");
    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}