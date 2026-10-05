#include <stdio.h>
#include <string.h>

int main()
{
    // Sorting an Array of Strings
    // Using selection sort algorithm

    char strings[10][100] =
    {
        "demonstration",
        "apple",
        "joyful",
        "friends",
        "battle",
        "incredible",
        "example",
        "great",
        "happy",
        "city",
    };

    int length = 10;
    char temp[100];

    for (int i = 0; i < (length - 1); i++)
    {
        int j_min = i;
        for (int j = i + 1; j < length; j++)
            // Smallest to largest use <, reverse use >
            if (strcmp(strings[j], strings[j_min]) < 0)
                j_min = j;

        if (j_min != i)
        {
            strcpy(temp, strings[i]);
            strcpy(strings[i], strings[j_min]);
            strcpy(strings[j_min], temp);
        }
    }

    for (int i = 0; i < length; i++)
    printf("%s\n", strings[i]);

    return 0;
}