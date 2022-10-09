#include <stdio.h>

int main()
{
    enum Difficulty
    {
        easy,
        medium,
        hard
    };
    enum Difficulty gameDifficulty = 2;
    if (gameDifficulty == easy)
    {
        printf("Game difficulty is set to hard\n");
    }
    else
    {
        printf("Game difficulty is not set to hard\n");
    }
}