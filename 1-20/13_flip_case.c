#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s);

int main(void)
{
    // Flip case

    char s1[] = "abcdeABCDE";
    printf("s1: %s\n", s1);
    letter_flip(s1);
    printf("s1 after: %s\n", s1);

    char s2[] = "ThiS iS My sTrInG!";
    printf("s2: %s\n", s2);
    letter_flip(s2);
    printf("s2 after: %s\n", s2);


    return 0;
}

void letter_flip(char *s) {

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (islower(s[i]))
            s[i] = toupper(s[i]);
        else if (isupper(s[i]))
            s[i] = tolower(s[i]);
    }
}