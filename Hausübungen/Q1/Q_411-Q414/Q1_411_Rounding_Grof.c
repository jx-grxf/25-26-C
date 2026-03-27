#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPPER_VALUE 5
#define LOWER_VALUE 0

int main() {

    double generatedNumber = 0;
    double roundedNumber = 0;
    int decimalPoints = 0;
    
    srand(time(NULL));

    generatedNumber = (double)rand() / RAND_MAX * (UPPER_VALUE - LOWER_VALUE) + LOWER_VALUE;

    printf("Generated random number: %.8f\n", generatedNumber);

    printf("Input the number of decimal points: ");
    scanf("%d", &decimalPoints);

    roundedNumber = generatedNumber * pow(10, decimalPoints);

    roundedNumber = round(roundedNumber);

    roundedNumber = roundedNumber / pow(10, decimalPoints);

    printf("Rounded random number: %.8f\n", roundedNumber);

    
    
    return 0;
}