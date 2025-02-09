/*
We will write a program that generate a random number and asks the player to guess it.
If the player's guess is higher than the actual number, the program displays"lower number please".
Similarly, if the user's guess is too low, the program prints "Higher number please".
When the user guesses the correct number, the program displays the number of guesses the player
used to arrived at the number.

HINT: USE LOOP & USE A RANDOM NUMBER GENERATOR.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);
    printf("Guess the number");
    do
    {
        printf("Guess the number");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower number please!\n");
        }
        else{
            printf("Higher number please!\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}
