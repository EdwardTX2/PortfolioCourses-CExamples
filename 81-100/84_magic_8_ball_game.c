#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Magic 8-Ball Game

    srand(time(NULL));

    char question[1024];
    char *answers[] = 
    {
        "It is certain.",
        "It is decidedly so.",
        "Without a doubt.",
        "Yes definitely.",
        "You may rely on it.",
        "As I see it, yes.",
        "Most likely.",
        "Outlook good.",
        "Yes.",
        "Signs point to yes.",
        "Reply hazy, try again.",
        "Ask again later.",
        "Better not tell you now.",
        "Cannot predict now.",
        "Concentrate and ask again.",
        "Don't count on it.",
        "My reply is no.",
        "My sources say no.",
        "Outlook not so good.",
        "Very doubtful."
    };

    int rotation = rand() % 20;

    do
    {
        printf("***** Ask Magic 8-Ball *****\n\n");
        printf("[Enter quit to exit.]\n\n");
        printf("Question: ");

        fgets(question, 1024, stdin);

        if (strcmp(question, "quit\n") == 0)
            break;

        // a = 97, b = 98, etc.
        int length = strlen(question);
        int total = 0;
        for (int i = 0; i < length; i++)
            total += question[i];

        int answer = (total + rotation) % 20;

        printf("Magic 8-Ball says: %s\n\n", answers[answer]);
    } while (true);
    

    return 0;
}