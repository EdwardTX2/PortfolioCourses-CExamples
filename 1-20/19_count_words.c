#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Count occurences of word in a string

int word_count(char *string, char*word);

int main(void)
{

    char* s1 = "A with string with some with words within it.";
    char s2[] = "with";

    int result = word_count(s1, s2);
    printf("Count: %d\n", result);

    return 0;
}

// A string with some words in it.
//
// with
//
//
int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {
        bool word_found = true;
        for (int j = 0; j < wlen; j++)
        {
            if (word[j] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found) count++;
    }
    return count;
}