#include <stdio.h>
#include <string.h>

void replace_char(char *string,
                  char replace,
                  char new);

int main(void)
{

    char s1[] = "This is my string.";
    replace_char(s1, 'i', 'Z');
    printf("s1: %s\n", s1);

    char s2[] = "aaaaBBBBaBBBBaaaBBBBcdefa";
    replace_char(s2, 'a', 'Z');
    printf("s2: %s\n", s2);

    return 0;
}

void replace_char(char *string,
                  char replace,
                  char new)
{
    int slen = strlen(string);

    for (int i = 0; i < slen; i++)
        if (string[i] == replace)
            string[i] = new;
}