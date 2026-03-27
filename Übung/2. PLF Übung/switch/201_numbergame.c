#include <stdio.h>
#include <stdlib.h>


int main() {

    int number = 0;

    printf("Please enter the number: \n");
    scanf("%d", &number);

    switch (number % 5) {

        case 0: number *= 2;
        break;

        case 2: number /= 2;
        break;

        case 3: number += 3;
        break;

        default: number -= 4;
    }

    printf("New value: %d", number);

    

    return 0;
}