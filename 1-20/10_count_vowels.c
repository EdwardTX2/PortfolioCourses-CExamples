#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main(void)
{
    char s1[] = "It's a wonderful life!";
    char s2[] = "Luke I am your Father";
    char s3[] = "AaEeIiOoUu";

    int s1count = vowel_count(s1);
    int s2count = vowel_count(s2);
    int s3count = vowel_count(s3);

    printf("Total Vowels: %d\n", s1count);
    printf("Total Vowels: %d\n", s2count);
    printf("Total Vowels: %d\n", s3count);

    return 0;

}

int vowel_count(char *s) {

    int count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i])) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count++;
        }
    }
    return count;
}