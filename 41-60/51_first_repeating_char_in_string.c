#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_first_repeat(char *s);

int main()
{
    // Print first repeating char in string

    char s[] = "abcdefghijklmnopjklmnop";
    print_first_repeat(s);
    
    return 0;
}

void print_first_repeat(char *s)
{
    int length = strlen(s);
    bool found_repeat = false;

    for (int i = 0; i < length; i++)
    {
        found_repeat = false;
        for (int j = 0; j < length; j++)
            if (s[i] == s[j] && i != j)
                found_repeat = true;

        if (found_repeat)
        {
            printf("%c\n", s[i]);
            break;
        }
    }
    if (!found_repeat)
        printf("No repeat characters found.\n");
}