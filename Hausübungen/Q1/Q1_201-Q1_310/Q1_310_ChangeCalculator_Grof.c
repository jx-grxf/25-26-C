#include <stdio.h>

int main() {

    int amount = 0;
    int hundreds = 0;
    int fifties = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int twos = 0;
    int ones = 0;

    printf("Please input the amount!: ");
    scanf("%d", &amount);

    hundreds = amount / 100;
    amount = amount % 100;

    fifties = amount / 50;
    amount = amount % 50;

    twenties = amount / 20;
    amount = amount % 20;

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    twos = amount / 2;
    amount = amount % 2;

    ones = amount; 

    printf("Your change:\n");
    printf("%d = 100 EUR\n", hundreds);
    printf("%d = 50 EUR\n", fifties);
    printf("%d = 20 EUR\n", twenties);
    printf("%d = 10 EUR\n", tens);
    printf("%d = 5 EUR\n", fives);
    printf("%d = 2 EUR\n", twos);
    printf("%d = 1 EUR\n", ones);

    return 0;
}
