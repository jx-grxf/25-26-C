#include <stdio.h>

int main() {

    int number = 0;

    printf("Please input a number: ");
    scanf("%d", &number);

    number = number + 1;
    printf("The present value of the number is: %d\n", number);

    number = number + 1;
    printf("The present value of the number is: %d\n", number);

    number = number + 1;
    printf("The present value of the number is: %d\n", number);

    return 0;


}