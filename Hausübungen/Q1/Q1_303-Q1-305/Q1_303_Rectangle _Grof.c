#include <stdio.h>

int main() {




    int height = 0;
    int width = 0;
    int perimeter = 0;
    int area = 0;

    printf("Please enter the height: ");
    scanf("%d", &height);

    printf("Please enter the width: ");
    scanf("%d", &width);

    perimeter = 2 * (width + height);
    area = width * height;

    printf("Perimeter: %d cm\n", perimeter);
    printf("Area: %d cm2\n", area);

    return 0;


    
}
