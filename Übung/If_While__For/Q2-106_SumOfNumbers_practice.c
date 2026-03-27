#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_BOUND 60
#define LOWER_BOUND -60

int main() {

    int randN1 = 0;
    int randN2 = 0;
    int randN3 = 0;
    int randN4 = 0;
    int randN5 = 0;
    int randN6 = 0;

    int sumPos = 0;
    int sumNeg = 0;

    srand(time(NULL));

    randN1 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randN2 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randN3 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randN4 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randN5 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;
    randN6 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) + LOWER_BOUND;

    

    printf("===SUM OF NUMBERS===\n");
    printf("---------------------------\n");
    printf("Random numbers: %d/%d/%d/%d/%d/%d\n", randN1, randN2, randN3, randN4, randN5, randN6);





    

    return 0;
}