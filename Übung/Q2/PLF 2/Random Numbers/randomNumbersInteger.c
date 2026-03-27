#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER_VALUE 2
#define UPPER_VALUE 10

int main() {

    int number = 0;

    srand(time(NULL));

    printf("=== RANDOM NUMBERS GENERATOR ===\n");

    number = rand() % (UPPER_VALUE - LOWER_VALUE + 1) - LOWER_VALUE;

    printf("%d", number);

    return 0; 

    }
