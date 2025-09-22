/*      PROJECT 2:RANDOM NUMBER GAME 
.        You have to write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program prints “Higher number please”. When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
*/

#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main()
{
    // Seed the random generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0; //input
    int guessed; //input

    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Gusse the number:");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf(" Lower the number Please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf(" Higher the number Please!\n");
        }
        no_of_guesses++;
    } while (guessed != randomNumber);

    printf("You Gussed the number in %d gusses. WOW!\n", no_of_guesses);

    return 0;
}