#include <stdio.h>
#include <math.h>

int main() {

    double number1 = 0.0;
    double number2 = 0.0;
    double number3 = 0.0;
    double number4 = 0.0;
    double number5 = 0.0;

    double sum = 0.0;
    double mean = 0.0;


    printf("Input: \n");
    printf("==================\n");
    printf("Number1: \n");
    scanf("%lf", &number1);
    printf("Number2: \n");
    scanf("%lf", &number2);
    printf("Number3: \n");
    scanf("%lf", &number3);
    printf("Number4: \n");
    scanf("%lf", &number4);
    printf("Number5: ");
    scanf("%lf", &number5);
    printf("==================\n");


    sum = number1 + number2 + number3 + number4 + number5;
    mean = sum / 5.0;  

    printf("Sum: %lf\n", sum);    
    printf("Mean: %lf\n", mean);  

    return 0;  

}