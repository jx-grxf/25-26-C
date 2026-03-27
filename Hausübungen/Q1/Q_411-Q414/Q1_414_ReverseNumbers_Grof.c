#include <stdio.h>

int main() {

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int temp = 0;

    printf("===INPUT===\n");
    
    printf("Number 1: ");
    scanf("%d", &number1);

    printf("Number 2: ");
    scanf("%d", &number2);

    printf("Number 3: ");
    scanf("%d", &number3);

    printf("Number 4: ");
    scanf("%d", &number4);


    printf("===THE ORIGINAL NUMBERS=== -> %d, %d, %d, %d\n", number1, number2, number3, number4);


    temp = number1;
    number1 = number4;
    number4 = temp;
    temp = number2;
    number2 = number3;
    number3 = temp;



    printf("===THE NUMBERS IN REVERSE ORDER=== -> %d, %d, %d, %d\n", number1, number2, number3, number4);

    return 0;

    }