#include <stdio.h>
#include <stdlib.h>

int main()
{

    int userInput3;

    printf("===3===\n");

    do
    {

        printf("Please enter n for diamond pattern (Valid Range: 1-20): ");
        scanf("%d", &userInput3);

    } while (userInput3 < 1 || userInput3 > 20);

    for (int i = 1; i <= userInput3; i++)
    {
        for (int x = i; x < userInput3; x++)
        {
            printf(" ");
        }

        for (int y = 1; y <= (2 * i) - 1; y++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = userInput3 - 1; i >= 1; i--)
    {
        for (int x = userInput3; x > i; x--)
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
