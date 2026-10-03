#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]);

int main(void)
{
    // Is it a Palindrome?

    char string1[] = "not a palindrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if (is_palindrome(string1))
        printf("%s\n- is a palindrome!\n", string1);
    else
        printf("%s\n- is not a palindrome\n", string1);

            if (is_palindrome(string2))
        printf("%s\n- is a palindrome!\n", string2);
    else
        printf("%s\n- is not a palindrome\n", string1);

            if (is_palindrome(string3))
        printf("%s\n- is a palindrome!\n", string1);
    else
        printf("%s\n- is not a palindrome\n", string3);

    return 0;
}

bool is_palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int len = strlen(string);
    
    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[len - i - 1])
            return false;
    }
    return true;
}