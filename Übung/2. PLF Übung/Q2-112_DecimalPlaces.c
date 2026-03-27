#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    int digits = 0;


    printf("Please enter your number: \n");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    if (number > 999999) {
        printf("ERROR! The number is to big, try again.");
        return 1;
    }

    if (number < 10) {
        digits = 1;
    } else if (number >= 10 && number < 100) {
        digits = 2;
    } else if (number >= 100 && number < 1000) {
        digits = 3;
    } else if (number >= 1000 && number < 10000) {
        digits = 4;
    } else if (number >= 10000 && number < 100000) {
        digits = 5;
    } else {
        digits = 6;
    }

    printf("This number has %d digts", digits);

    

    return 0;
}