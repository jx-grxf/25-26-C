#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;

    printf("===FIND DIVIDER===\n");

    printf("Please enter an integer: ");
    scanf("%d", &number);

    printf("The number %d is divisible by: \n", number);

    for (int i = 1; i <= number; i++) {

        if (number % i == 0) {
            printf("%d  ", i);
        }
    }

    return 0;
}