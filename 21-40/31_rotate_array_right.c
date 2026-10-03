#include <stdio.h>

void rotate_once_right(int array[], int length);
void rotate_right(int array[], int length, int n);

int main(void)
{
    // Rotate array right

    int a1[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
        printf("%d ", a1[i]);
    printf("\n");
    rotate_right(a1, 6, 3);
    for (int i = 0; i < 6; i++)
        printf("%d ", a1[i]);
    printf("\n");

    return 0;
}

void rotate_once_right(int array[], int length)
{
    int temp = array[length - 1];
    for (int i = (length - 2); i >= 0; i--)
        array[i + 1] = array[i];
    array[0] = temp;
}

void rotate_right(int array[], int length, int n)
{
    for (int i = 0; i < n; i++)
        rotate_once_right(array, length);
}