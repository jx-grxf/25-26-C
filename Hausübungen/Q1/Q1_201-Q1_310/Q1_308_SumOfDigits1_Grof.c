#include <stdio.h>

int main() {

    int number = 0;
    int firstNumber = 0;
    int secondNumber = 0;
    int sum = 0;

    printf("Please enter a two digit number: ");
    scanf("%d", &number);

    firstNumber = number / 10; //Das ist die Zehnerstelle also die erste Zahl 
    secondNumber = number % 10; //Das ist die Einerstelle also die zweite Zahl
    sum = firstNumber + secondNumber;

    printf("The sum of the digits is %d", sum);

    return 0;


}