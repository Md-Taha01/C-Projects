/*      PROJECT 1: THEATER ORGNIZOR
.        There is movie Animal held at Prozone mall in Infinix which has 4 types of tickets 150,250,350 and 500 which include information of seat,row position and some additonal. The data input should be user freindly.
*/

#include <stdio.h>

int main()
{
    int price;

    printf("\t Movie = Animal.\n");
    printf("     Prozone Mall at Infinix. \n");
    printf("Price range: \n 150 = Bronze\n 250 = Silver \n 350 = Gold \n 500 = Diamond\n");

    do
    {
        printf("~Enter the price: \n");
        scanf("%d", &price);

        if (price == 150)
        {
            printf("You have selected Bronze.\n");
            printf("Front 4 Rows with 60 Seats available.\n");
            printf("~Includes: Free Popcorns (Large).\n");
            break;
        }
        else if (price == 250)
        {
            printf("You have selected Silver.\n");
            printf("Mid 3 Rows with 40 Seats available.\n");
            printf("~Includes: Free Popcorns(Medium).\n");
            break;
        }
        else if (price == 350)
        {
            printf("You have selected Gold.\n");
            printf("Last 3 Rows with 25 Seats available.\n");
            printf("~Includes: Free Popcorns(Small).\n");
            break;
        }
        else if (price == 500)
        {
            printf("You have selected Diamond.\n");
            printf("Back 1 Row with 15 Seats available.\n");
            printf("Includes: Free Popcorns (unlimited) And Cold Drinks.\n");
            break;
        }
        else
        {
            printf("Wrong input \n");
            printf("Please select accordingly\n");
        }

    } while (1);

    return 0;
}
