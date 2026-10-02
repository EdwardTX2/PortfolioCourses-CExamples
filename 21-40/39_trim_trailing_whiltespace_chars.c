#include <stdio.h>
#include <string.h>

void trim(char *s);

int main()
{
    char s[] = "This is the way. \n\n\t ";

    printf("before: %s\n", s);

    trim(s);

    printf("after: %s\n", s);
}

void trim(char *s)
{
    int i = strlen(s) - 1;
    while (i > 0)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            i--;
        else
            break;
    }

    s[i + 1] = '\0';
}