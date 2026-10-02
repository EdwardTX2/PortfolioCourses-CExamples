#include <stdio.h>

int main(void)
{
    // Triangle of Stars

    // Outer loop for rows
    for (int i = 0; i <= 10; i ++)
    {
        // Inner loop for stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}