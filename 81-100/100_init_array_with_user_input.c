#include <stdio.h>

// #define LENGTH 5

int main()
{
    // Initialize an array with user input

    int length;

    printf("Length: ");
    scanf("%d", &length);

    int array[length];

    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("\n");
    
    for (int i = 0; i < length; i++)
        printf("array[%d] = %d\n", i, array[i]);

    printf("\n");


    return 0;
}