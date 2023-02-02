#include <stdio.h>
#include <stdlib.h>
//Ryan Carlson 2/1/2023

int main()
{
    int atempt;
    int numGuesses = 0;
    int range = 0;
    srand(time(NULL));//seed random number generator otherwise will always come back as 1


    printf("\n\tWelcome to the guess-a-number game!\n\n");
    printf("\tHow many guesses would you like? ");
        scanf("%d", &numGuesses);

    printf("\n\tHow big would you like the number range? ");
        scanf("%d", &range);

    printf("\n\tYou have %d tries!\n\n", numGuesses);
    printf("\tI'm thinking of a number between 0 and %d. What is it? ",range);
    scanf("%d", &atempt);

    int number = rand() % range;

    for(int i=1; i < numGuesses; i++)
    {
        if (atempt > range || atempt < 0)
        {
            printf("\n\tThe number you guessed is out of bounds ");
        }
        else
        {
            if (atempt > number) {printf ("\n\tNo, try something lower: ");}
            if (atempt < number) {printf("\n\tNo, try something higher: ");}
            if (atempt == number){printf("\n\tThats it! %d\n", number);return 0;}
        }

        scanf("%d", &atempt);

    }

    printf("\n\tGame Over! The Number was %d\n", number);

    return 0;
}
