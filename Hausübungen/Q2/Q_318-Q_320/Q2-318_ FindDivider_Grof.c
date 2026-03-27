#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    
    printf("===FIND DIVIDER===\n");

    printf("Please enter an integer: ");
    scanf("%d", &number);

    printf("The number %d is divisible by the following numbers: ", number);

    for (int i = 0; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d  ", i);
        }
    }

    

    return 0;
}