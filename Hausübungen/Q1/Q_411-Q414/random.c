#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_VALUE 5
#define LOWER_VALUE 1

int main() {

    int randomValue = 0;

    srand(time(NULL));

    randomValue = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;

    printf("Die maximale Zufallszahl lautet: %d\n", RAND_MAX);
    printf("Zufallszahl lautet: %d", randomValue);
    

    return 0;
}