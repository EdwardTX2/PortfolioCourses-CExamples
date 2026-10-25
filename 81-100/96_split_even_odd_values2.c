#include <stdio.h>
#include <stdlib.h>

void split_nums(int array[], int array_length, 
                int **odd, int *odd_length,
                int **even, int *even_length);

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

    int *even = NULL, *odd = NULL;
    int even_length = 0, odd_length = 0;

    split_nums(array, array_length, &odd, &odd_length, &even, &even_length);

    for (int i = 0; i < even_length; i++)
        printf("even[%d] = %d\n", i, even[i]);
    printf("\n");

    for (int i = 0; i < odd_length; i++)
        printf("odd[%d] = %d\n", i, odd[i]);
    printf("\n");

    return 0;
}

void split_nums(int array[], int array_length, 
                int **odd, int *odd_length,
                int **even, int *even_length)
{
    *odd_length = 0;
    *even_length = 0;
    for (int i = 0; i < array_length; i++)
    {
        if (array[i] % 2 == 1)
            *odd_length = *odd_length + 1;
        else
            *even_length = *even_length + 1;

        *odd = malloc(*odd_length * sizeof(int));
        *even = malloc(*even_length * sizeof(int));

        int array_count = 0, even_count = 0, odd_count = 0;
        while (array_count < array_length)
        {
            if (array[array_count] % 2 == 1)
            {
                (*odd)[odd_count] = array[array_count];
                odd_count++;
            }
            else
            {
                (*even)[even_count] = array[array_count];
                even_count++;
            }
            array_count++;
        }
    }
}