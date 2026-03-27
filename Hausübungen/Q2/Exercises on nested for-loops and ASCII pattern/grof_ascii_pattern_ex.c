#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 1a Variables

    int userInput1a;

    printf("===1A===\n");


    do
    {

        printf("Please enter the lenght of the triangle for A1 (Valid Range: 1-20): ");
        scanf("%d", &userInput1a);
        
    } while (userInput1a < 1 || userInput1a > 20);

    for (int i = 1; i <= userInput1a; i++) 
    {
        for (int x = i; x <= userInput1a; x++) 
        {
            printf("*");
        }

        printf("\n");
    }

    // 1b

    



    return 0;
}