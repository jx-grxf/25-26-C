#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_BOUND 60
#define LOWER_BOUND -60


int main() {

    int randNumber1 = 0;
    int randNumber2 = 0;
    int randNumber3 = 0;
    int randNumber4 = 0;
    int randNumber5 = 0;
    

    int smallestNumber = 0;
    int biggestNumber = 0;

    int sumPos = 0;
    int sumNeg = 0;

    srand(time(NULL));
    

    printf("=== SUM OF NUMBERS ===\n");
    printf("======================================\n");

    randNumber1 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randNumber2 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randNumber3 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randNumber4 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randNumber5 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

    printf("Random numbers: %d/%d/%d/%d/%d\n", randNumber1, randNumber2, randNumber3, randNumber4, randNumber5);

    smallestNumber = randNumber1;
    biggestNumber = randNumber1;

    if (randNumber1 < 0) {
        sumNeg += randNumber1;
    } else {
        sumPos += randNumber1;
    }

    if (randNumber2 < 0) {
        sumNeg += randNumber2;
    } else {
        sumPos += randNumber2;
    }

    if (randNumber3 < 0) {
        sumNeg += randNumber3;
    } else {
        sumPos += randNumber3;
    }

    if (randNumber4 < 0) {
        sumNeg += randNumber4;
    } else {
        sumPos += randNumber4;
    }

    if (randNumber5 < 0) {
        sumNeg += randNumber5;
    } else {
        sumPos += randNumber5;
    }

    printf("Sum of the positiv numbers: %d\n", sumPos);
    printf("Sum of the negative numbers: %d\n", sumNeg);

    

    

    return 0;
}
