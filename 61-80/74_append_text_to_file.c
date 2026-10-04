#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINE 1024

int main()
{
    // Append Text to a File

    FILE *file;
    char buffer[MAX_LINE];

    file = fopen("output.txt", "a");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter 'quit' to exit.\n");

    do {
        fgets(buffer, MAX_LINE, stdin);
        if (strcmp(buffer, "quit\n") == 0)
            break;
        fputs(buffer, file);

    } while (true);

    fclose(file);

    return 0;
}