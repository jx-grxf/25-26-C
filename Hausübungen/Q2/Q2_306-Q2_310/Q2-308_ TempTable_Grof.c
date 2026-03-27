#include <stdio.h>
#include <stdlib.h>

int main() {

    int celsius = -25;
    float farenheit = 0.0f;

    printf("===Celsius Farenheit Table===\n");
    printf("=====================================\n");

    while (celsius <= 40) {

        farenheit = (float)celsius * 9 / 5 + 32;

        printf("%d degress Celsius is %.2f degrees Farenheit\n", celsius, farenheit);

        celsius += 5;
    }

    

    return 0;
}