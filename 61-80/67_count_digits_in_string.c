#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_digits(char *s);

int main()
{
    // Count digits in a string

    char s[] = "asdfasdfsdaHFGGJGJG 123456789 @#$@#^$%^$#%^";
    int result = count_digits(s);
    printf("Result: %d\n", result);

    return 0;
}

int count_digits(char *s)
{
    int length = strlen(s);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (isdigit(s[i])) count++;
    }
    return count;
}