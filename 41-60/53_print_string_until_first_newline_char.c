#include <stdio.h>

void print_until_newline(char *s);

int main()
{
    // Print a string until the first newline character

    char s[] = "This is the way.\n Again...";
    print_until_newline(s);
    printf("\n");

    return 0;
}

void print_until_newline(char *s)
{
    int i = 0;
    while (s[i] != '\n' && s[i] != '\0')
    {
        putchar(s[i]);
        i++;
    }
}