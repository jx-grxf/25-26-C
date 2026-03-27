#include <stdio.h>

int main() {

    int number = 0;
    int firstNumber = 0;   // Das ist die Hunderterstelle
    int secondNumber = 0;  // Das ist die Zehnerstelle
    int thirdNumber = 0;   // Das ist die Einerstelle
    int sum = 0;

    printf("Please enter a three digit number: ");
    scanf("%d", &number);

    firstNumber = number / 100;           // Das ist die Hunderterstelle (Division durch 100 gibt die Hunderterstelle)
    secondNumber = (number / 10) % 10;    // Das ist die Zehnerstelle (Zuerst muss man durch 10 für Einerstelle und Modulo 10 für die Einerstelle)
    thirdNumber = number % 10;            // Einerstelle (Module 10 gibt sofort die Einerstelle)
    sum = firstNumber + secondNumber + thirdNumber;

    printf("The sum of the digits is %d", sum);

    return 0;

    // kommentare sind für mich zum verständnis 
}