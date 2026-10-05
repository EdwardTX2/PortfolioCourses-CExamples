#include <stdio.h>

int main()
{
    // Coding Trick to Initialize an Array
    // With Include Directive and
    // External File

    int a[] = {
        #include "data.txt"
    };

    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}