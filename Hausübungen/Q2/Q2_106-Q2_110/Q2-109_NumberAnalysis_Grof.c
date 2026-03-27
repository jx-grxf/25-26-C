#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int enteredNumber = 0;
    int digits = 0;

    printf("===NUMBER ANALYSIS===\n");

    printf("Please enter the number up to 5 digits you want to be analysed: ");
    scanf("%d", &enteredNumber);

    if (enteredNumber > 99999 || enteredNumber < -99999) {

        printf("The number you entered is to big! \n");
        exit(EXIT_FAILURE);
    }

    printf("Analysis of number: %d \n", enteredNumber);

    if (enteredNumber > 0) {

        printf("positve\n");
    } else {

        printf("negative\n");
    }

    if (enteredNumber % 2 == 0) {

        printf("even\n");
    } else {

        printf("odd\n");
    }


    int temp = enteredNumber;

    if (temp < 0) {

        temp = -temp;
    }

    if (temp >= 0 && temp <= 9) {
        digits = 1;
    } else if (temp >= 10 && temp <= 99) {
        digits = 2;
    } else if (temp >= 100 && temp <= 999) {
        digits = 3;
    } else if (temp >= 1000 && temp <= 9999) {
        digits = 4;
    } else if (temp >= 10000 && temp <= 99999) {
        digits = 5;
    } 

    printf("%d digits", digits);
}