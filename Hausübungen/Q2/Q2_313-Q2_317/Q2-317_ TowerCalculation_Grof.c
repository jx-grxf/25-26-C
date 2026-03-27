#include <stdio.h>
#include <stdlib.h>

int main() {

    int startingNumber = 0;
    int value = 0;
    int calculation = 0;

    printf("===TOWER CALCULATION===\n");

    printf("Please enter the starting number: ");
    scanf("%d", &startingNumber);

    value = startingNumber;

    for (int i = 1; i <= 9; i++) 
    {
       calculation = value * i;

       printf("%d * %d = %d\n", value, i, calculation);

       value = calculation;
    }

    for (int u = 1; u <= 9; u++) {

        calculation = value / u;
        
        printf("%d / %d = %d\n", value, u, calculation);

        value = calculation;


    }
}