#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER_BOUND 67
#define UPPER_BOUND 67.67

int main() {

    float floatNumber;

    srand(time(NULL));

    printf("=== RANDOM FLOAT GENERATOR V1.0 EXE HACKER EDITION ===\n");

    floatNumber = LOWER_BOUND + (float)rand() / RAND_MAX * (UPPER_BOUND - LOWER_BOUND);

    printf("Random number: %.2f\n", floatNumber);

    return 0;
}