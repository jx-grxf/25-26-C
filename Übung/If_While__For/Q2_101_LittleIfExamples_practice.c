#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

    

    printf("===LITTLE IF EXAMPLES===\n");

    //Number a
    int integerA = 0;
    float squareRootA = 0.0f;

    printf("===a===\n");

    printf("Please enter an integer: ");
    scanf("%d", &integerA);

    if (integerA < 0 || integerA == 0) {

        printf ("The square root of a negative number or zero is not possible, try again!\n");

    } else {

        squareRootA = sqrt(integerA);

        printf("The square root of %d is %.2f.\n", integerA, squareRootA); 
    }

    // B 

    printf("===b===\n");

    float randNumber1B = 0.0f;
    float randNumber2B = 0.0f;
    float randNumber3B = 0.0f;

    float sumB = 0.0f;
    float productB = 0.0f;

    srand(time(NULL));

    randNumber1B = (float)rand() / (float)RAND_MAX;
    randNumber2B = (float)rand() / (float)RAND_MAX;
    randNumber3B = (float)rand() / (float)RAND_MAX;

    printf("First random number: %f\n", randNumber1B);
    printf("Second random number: %f\n", randNumber2B);
    printf("Third random number: %f\n", randNumber3B);

    sumB = randNumber1B + randNumber2B + randNumber3B;
    productB = randNumber1B * randNumber2B * randNumber3B;

    if (sumB > productB) {

        printf("The sum %f is bigger than the product %f.\n", sumB, productB);
    } else {
        printf("The product %f is bigger than the sum %f.", productB, sumB);
    }

    //d
    printf("===d===\n");

    int numberD = 0;

    

    

    return 0;
}