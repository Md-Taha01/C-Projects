/*                  PROJECT 3: SNAKE, WATER, GUN
    Snake, water, gun \\\\\ rock, paper, scissors is a game most of us have played during
school time. Write a C program capable of playing this game. Your program should be able to print the result after you choose one of them.
*/

#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int game(char, char);
int game(char user, char computer)
{
    if (user == computer)
        return 0;
    if ((user == 's' && computer == 'w') || (user == 'w' && computer == 'g') || (user == 'g' && computer == 's'))
    {
        return 1;
    }
    else
        return -1;
}
// Function to convert char to full text
const char *choiceName(char c)
{
    if (c == 's')
        return "Snake";
    if (c == 'w')
        return "Water";
    if (c == 'g')
        return "Gun";
    return "Invalid";
}

int main()
{
    // Seed the random generator with the current time
    srand(time(0));

    char user, computer;

    // Generate a random number between 1 and 100
    int number = (rand() % 3);

    printf("Enter s for snake\n Enter w for water\n Enter g for gun\n");
    scanf(" %c", &user);

    if (number == 0)
        computer = 's';

    else if (number == 1)
        computer = 'w';

    else
        computer = 'g';

    int result = game(user, computer);

    printf("You chose the Word %s and computer chose %s\n", choiceName(user), choiceName(computer));

    if (result == 0)
    {
        printf("Game Draw!\n");
    }

    else if (result == 1)
    {
        printf("You Won!\n");
    }

    else
        printf("Computer Won!");

    return 0;
}