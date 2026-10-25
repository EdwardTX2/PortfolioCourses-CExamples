#include <stdio.h>

void shift_zeros(int array[], int length);

int main(void)
{
    // moves zeros to end of array

    int data[] = {2,0,5,6,0,0,7,0,4,7};
    int length = 10;

    shift_zeros(data, length);

    for (int i = 0; i < length; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}

void shift_zeros(int array[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] != 0)
        {
            array[count] = array[i];
            count++;
        }
    }

    for (int i = count; i < length; i++)
    {
        array[i] = 0;
    }
}