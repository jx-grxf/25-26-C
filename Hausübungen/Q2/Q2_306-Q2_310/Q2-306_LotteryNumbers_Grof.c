#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER_BOUND 1
#define UPPER_BOUND 45

int main() {

    int LN1 = 0;
    int LN2 = 0;
    int LN3 = 0;
    int LN4 = 0;
    int LN5 = 0;
    int LN6 = 0;

    int userChoice = 0;

    
    while (userChoice == 0) {

        printf("===LOTTERY NUMBERS===\n");

        srand (time(NULL));

        LN1 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;
        LN2 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;
        LN3 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;
        LN4 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;
        LN5 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;
        LN6 = rand() % (UPPER_BOUND - LOWER_BOUND + 1) - LOWER_BOUND;

        printf("Lottery numbers: %d %d %d %d %d %d\n", LN1, LN2, LN3, LN4, LN5, LN6);

        printf("Do you want to generate another 6 numbers? (Press 0 -> yes), (Press 1 -> exit)\n");
        scanf("%d", &userChoice);

    
    }
    

    return 0;
}