#include <stdio.h>
#include <stdlib.h>

int main() {

    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    int temp = 0;
    
    printf("=== NUMBER SORT 2 ===\n");
    printf("============================\n");

    printf("Number1: \n");
    scanf("%d", &number1);

    printf("Number2: \n");
    scanf("%d", &number2);

    printf("Number3: \n");
    scanf("%d", &number3);

    printf("Entered numbers: %d,%d,%d\n", number1, number2, number3);

    if (number1 > number2)
    {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    if (number1 > number3)
    {
        temp = number1;
        number1 = number3;
        number3 = temp;
    }

    if (number2 > number3)
    {
        temp = number2;
        number2 = number3;
        number3 = temp;
    }

    printf("Sorted numbers: %d, %d, %d\n", number1, number2, number3);
    
    return 0;
}