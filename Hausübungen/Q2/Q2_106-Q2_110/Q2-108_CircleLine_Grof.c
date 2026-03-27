#include <stdio.h>
#include <math.h>

int main() {

    int xCoord = 0;
    int yCoord = 0;
    int xmp = 0;
    int ymp = 0;
    int radius = 0;

    printf("Input of the x-coordinate of the point: ");
    scanf("%d", &xCoord);

    printf("Input of the y-coordinate of the point: ");
    scanf("%d", &yCoord);

    printf("Input of the x-coordinate of the center point: ");
    scanf("%d", &xmp);

    printf("Input of the y-coordinate of the center point: ");
    scanf("%d", &ymp);

    printf("Enter the radius length: ");
    scanf("%d", &radius);

    
    float distance = sqrt((xCoord - xmp) * (xCoord - xmp) + (yCoord - ymp) * (yCoord - ymp));

    
    if (distance < radius) {
        printf("The point (%d/%d) lies inside the circular line.\n", xCoord, yCoord);
    } else if (distance == radius) {
        printf("The point (%d/%d) lies on the circular line.\n", xCoord, yCoord);
    } else {
        printf("The point (%d/%d) lies outside the circular line.\n", xCoord, yCoord);
    }

    return 0;
}