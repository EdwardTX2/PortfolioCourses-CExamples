#include <stdio.h>

int main(void)
{
    // Split even and odd values of an array into two arrays

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int array_length = 10;

    int even_array[array_length], odd_array[array_length];

    int odd_count = 0;
    for (int i = 0; i < array_length; i++)
    {
        if (array[i] % 2 == 1)
        {
            odd_array[odd_count] = array[i];
            odd_count++;
        }
    }

    int even_count = 0;
    for (int i = 0; i < array_length; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_array[even_count] = array[i];
            even_count++;
        }
    }

    for (int i = 0; i < odd_count; i++)
        printf("odd_array[%d] = %d\n", i, odd_array[i]);
    
    printf("\n");
    for (int i = 0; i < even_count; i++)
        printf("even_array[%d] = %d\n", i, even_array[i]);

    printf("\n");

    return 0;
}