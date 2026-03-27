#include <stdio.h>
#include <stdlib.h>

int main () {

    int choice = 0;
    int choice2 = 0;

    int additionFirstNumber = 0;
    int additionSecondNumber = 0;
    int sumAddition = 0;

    int subtractionFirstNumber = 0;
    int subtractionSecondNumber = 0;
    int sumSubtraction = 0;

    int multiplicationFistNumber = 0;
    int multiplicationSecondNumber = 0;
    int sumMultiplication = 0;

    int divisionFirstNumber = 0;
    int divisionSecondNumber = 0;
    int sumDivison = 0;

    printf("Welcome to +-*/ calculator V1: \n");

    printf("Press 1 to continue or 2 to exit: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Programm wird beendet..... \n");
        exit(0);
    }

    printf("Addition: -> Please enter the first number: ");
    scanf("%d", &additionFirstNumber);

    printf("Addition: -> Please enter the second number: ");
    scanf("%d", &additionSecondNumber);

    sumAddition = additionFirstNumber + additionSecondNumber;

    printf("The sum of your number is: %d\n", sumAddition);



    printf("Subtraction: -> Please enter the first number: ");
    scanf("%d",&subtractionFirstNumber);

    printf("Subtraction: -> Please enter the second number: ");
    scanf("%d", &subtractionSecondNumber);

    sumSubtraction = subtractionFirstNumber - subtractionSecondNumber;

    printf("The result of your calculation is: %d\n", sumSubtraction);



    printf("Multiplication: -> Please enter the first number: ");
    scanf("%d", &multiplicationFistNumber);

    printf("Please enter the second number: ");
    scanf("%d", &multiplicationSecondNumber);

    sumMultiplication = multiplicationFistNumber * multiplicationSecondNumber;

    printf("The result of your calculation is %d\n", sumMultiplication);



    printf("Division: -> Please enter the first number: ");
    scanf("%d", &divisionFirstNumber);

    printf("Division: -> Please enter the second number: ");
    scanf("%d", &divisionSecondNumber);

    sumDivison = divisionFirstNumber / divisionSecondNumber;

    printf("The sum of your calculation is %d\n", sumDivison);




    printf("s: ");
    scanf("%d", &choice2)

    if 


    return 0;




}