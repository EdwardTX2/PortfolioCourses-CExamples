#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_lower(char *s);

int main()
{
    // Make all string letters lowercase

    char s[] = "Some String With LOTS OF Capitals";

    printf("before: %s\n", s);
    make_lower(s);

    printf("after: %s\n", s);

    return 0;
}

void make_lower(char *s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i ++)
        s[i] = tolower(s[i]);
}