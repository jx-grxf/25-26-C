#include <stdio.h>
#include <stdlib.h>

int main()
{

    int userInput2;

    printf("===2===\n");

    do
    {

        printf("Please enter the base of the triangle for 2 (Valid Range: 1-20): ");
        scanf("%d", &userInput2);

    } while (userInput2 < 1 || userInput2 > 20);

    for (int i = 1; i <= userInput2; i++)
    {
        for (int x = i; x < userInput2; x++)
        {
            printf(" ");
        }

        for (int y = 1; y <= (2 * i) - 1; y++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
