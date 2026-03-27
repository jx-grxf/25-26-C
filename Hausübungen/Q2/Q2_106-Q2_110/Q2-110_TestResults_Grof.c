#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int reachedPoints = 0;

    printf("Please enter the points reached in the test (In a Range between 0 - 48):");
    scanf("%d", &reachedPoints);

    if (reachedPoints > 48 || reachedPoints < 0) {
        printf("The number %d is not in the correct range. Please retry!\n", reachedPoints);
        exit(EXIT_FAILURE);
    } 

    printf("Reached points: %d\n", reachedPoints);

    if (reachedPoints >= 45 && reachedPoints <= 48) {
        printf("%d Points result in a Very Good!\n", reachedPoints);
    } 
    else if (reachedPoints >= 39 && reachedPoints <= 44) {
        printf("%d Points result in a Good!\n", reachedPoints);
    }
    else if (reachedPoints >= 32 && reachedPoints <= 38) {
        printf("%d Points result in an Average!\n", reachedPoints);
    }
    else if (reachedPoints >= 25 && reachedPoints <= 31) {
        printf("%d Points result in a Pass!\n", reachedPoints);
    }
    else {  
        printf("%d Points result in a Fail!\n", reachedPoints);
    }

    return 0;

    
}