#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int userInputNumber, attempts = 0;

    printf("Random number is: %d\n", randomNumber); // <---- Cheat Option
    printf("Guess a random number between (1 to 100): ");
    while (true)
    {
        if (attempts >= 1)
        {
            printf("Guess again: ");
        }
        scanf("%d", &userInputNumber);
        if (userInputNumber == randomNumber)
        {
            if (attempts < 3)
            {
                printf("You have guessed the number, you are a hacker and your total attempts are %d :)", attempts);
            }
            else if (attempts < 5)
            {
                printf("You have guessed the number, you are a pro and your total attempts are %d :)", attempts);
            }
            else if (attempts > 10)
            {
                printf("You have guessed the number, you are a noob and your total attempts are %d :(", attempts);
            }
            break;
        }
        if (userInputNumber > randomNumber)
            printf("Guess should be smaller\n");
        else if (userInputNumber < randomNumber)
            printf("Guess should be larger\n");
        attempts++;
    }
    return 0;
}