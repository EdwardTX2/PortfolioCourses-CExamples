#include <stdio.h>
#include <string.h>

int smallest_word(char *s);

int main()
{
    char s[] = "This isa, the way.";
    int smallest = smallest_word(s);
    printf("%d\n", smallest);
    return 0;
}

int smallest_word(char *s)
{
    int len = strlen(s);
    char nonwords[] = " .,;\t\n";
    int count = 0;
    int min = 100000;

    int i = 0;

    while (i < len)
    {
        count = 0;
        while (i < len)
        {
            if (strchr(nonwords, s[i]) != NULL)
                break;
            i++;
            count++;
        }

        if (count < min) min = count;

        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;
            i++;
        }
    }

    return min;
}