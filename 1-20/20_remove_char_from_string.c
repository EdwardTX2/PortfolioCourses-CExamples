#include <stdio.h>

void remove_char(char *string, char r);

int main(void)
{

    char s1[] = "A string with some words!";
    printf("s1 before: %s\n", s1);
    remove_char(s1, 's');
    printf("s1 after: %s\n", s1);
    char s2[] = "When in the course of human events";
    printf("s2 before: %s\n", s2);
    remove_char(s2, 'e');
    printf("s2 after: %s\n", s2);


    return 0;
}

// We've got a string here.
// o
//
void remove_char(char *string, char r)
{
    int pos = 0;
    while (string[pos] != '\0')
    {
        if (string[pos] == r)
        {
            int newpos = pos;
            while (string[newpos] != '\0')
            {
                string[newpos] = string[newpos+1];
                newpos++;
            }
        }
        else pos++;
    }

}