#include <stdio.h>
#include <stdlib.h>

#define BSIZE 1024

int main()
{
    // Compute average of numbers in a file

    FILE *fh;
    char buffer[BSIZE];
    double average, sum = 0;
    int total;

    fh = fopen("file.txt", "r");

    if (fh == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(buffer, BSIZE, fh) != NULL)
    {
        sum += atof(buffer);
        total++;
    }

    average = sum / total;

    printf("Average: %.2f\n", average);

    return 0;
}