#include <stdio.h>

#define GRAVITATION 9.81

int main() {

    int heightUPPERlimit = 0;
    int heightLOWERlimit = 0;

    int increment = 0;

    float fallTime = 0.0f;
    int heightFall = 0;

    printf("===FREEFALL TABLE===\n");

    printf("Height Upper limit: ");
    scanf("%d", &heightUPPERlimit);

    printf("Height Lower limit: ");
    scanf("%d", &heightLOWERlimit);

    printf("Increment: ");
    scanf("%d", &increment);

    printf("---------------------------------------\n");
    printf("Height of fall [m]  /   fall time [s]\n");
    printf("---------------------------------------\n");
    
    for (int i = heightLOWERlimit; i <= heightUPPERlimit; i+= increment) {

        fallTime = sqrt(2 * i / GRAVITATION);

        printf("%d  /   %.2f\n", heightFall, fallTime);

        heightFall += increment;
    }


}