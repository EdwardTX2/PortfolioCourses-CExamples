#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool startswith(char *string, char *start);

int main()
{
    // Check if string starts with a string

    char test[] = "Roses are red";

    char startOK[] = "Roses";

    if (startswith(test, startOK))
        printf("Yes, %s starts with %s\n", test, startOK);
    else
        printf("No, %s does not start with %s\n", test, startOK);

    char startBad[] = "Violets";

    if (startswith(test, startBad))
        printf("Yes, %s starts with %s\n", test, startBad);
    else
        printf("No, %s does not start with %s\n", test, startBad);

    char tooLong[] = "Roses are Red Violets are Blue";

    if (startswith(test, tooLong))
        printf("Yes, %s starts with %s\n", test, tooLong);
    else
        printf("No, %s does not start with %s\n", test, tooLong);

    return 0;
}

bool startswith(char *string, char *start)
{
    int string_length = strlen(string);
    int start_length = strlen(start);

    if (start_length > string_length) return false;

    for (int i = 0; i < start_length; i++)
        if (string[i] != start[i]) return false;

    return true;
}