#include <stdio.h>
#include <string.h>

int largest_word(char *s);

int main()
{
    char s[] = "This is the maximumest way.";

    int max = largest_word(s);

    printf("Max is: %d\n", max);

    return 0;
}

int largest_word(char *s)
{
    int len = strlen(s);
    int count = 0;
    int max = -1;
    char nonwords[] = " .,;!?\n\t";

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

        if (count > max) max = count;

        while (i < len)
        {
            if (strchr(nonwords, s[i]) == NULL)
                break;
            i++;
        }
    }
    return max;
}