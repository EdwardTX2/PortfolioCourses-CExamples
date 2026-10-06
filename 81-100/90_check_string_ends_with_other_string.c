#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool endswith(char *string, char*end);

int main()
{
    // Check if a String ends with another String

    char mystring[] = "Roses are red";

    char end_ok[] = "red";

    if (endswith(mystring, end_ok))
        printf("Yes %s ends with %s.\n", mystring, end_ok);
    else
        printf("No, %s does not end with %s.\n", mystring, end_ok);
    
    char end_not_ok[] = "blue";

    if (endswith(mystring, end_not_ok))
        printf("Yes %s ends with %s.\n", mystring, end_not_ok);
    else
        printf("No, %s does not end with %s.\n", mystring, end_not_ok);

    char too_long[] = "Roses are red violets are blue";

    if (endswith(mystring, too_long))
        printf("Yes %s ends with %s.\n", mystring, too_long);
    else
        printf("No, %s does not end with %s.\n", mystring, too_long);


    return 0;
}

bool endswith(char *string, char*end)
{
    int string_length = strlen(string);
    int end_length = strlen(end);

    if (end_length > string_length) return false;

    for (int i = 0; i < end_length; i++)
    {
        if (string[string_length - i] != end[end_length - i])
            return false;
    }
    return true;
}