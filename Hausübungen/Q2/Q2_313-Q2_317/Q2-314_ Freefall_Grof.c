#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define GRAVITATION 9.81

int main() {

    int heightUpperLimit = 0;
    int heightLowerLimit = 0;

    int increment = 0;

    int heightFall = 0;
    double resultFallTime = 0.0;

    
    printf("===FREEFALL TABLE===\n");

    printf("Please enter the lower height limit: ");
    scanf("%d", &heightLowerLimit);

    printf("Please enter the higher height limit: ");
    scanf("%d", &heightUpperLimit);

    printf("Please enter the increment: ");
    scanf("%d", &increment);

    system("clear");

    printf("Height of fall |m|     |   fall time |s|\n");
    printf("-----------------------|------------------\n");

    


    for (int i = heightLowerLimit; i <= heightUpperLimit; i += increment) {

        printf("%d  |  %lf\n", heightFall, resultFallTime);


        heightFall += increment;
        resultFallTime = sqrt(2 * heightFall / GRAVITATION);
    }





    

    return 0;
}