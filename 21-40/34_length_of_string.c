#include <stdio.h>

int string_length(char *string);

int main(void)
{
    char *s1 = "This is the way.";
    int length = string_length(s1);
    printf("length: %d\n", length);

    return 0;
}

int string_length(char *string)
{
    int length = 0;
    while (string[length] != '\0')
    {
        length++;
    }
    return length;
}