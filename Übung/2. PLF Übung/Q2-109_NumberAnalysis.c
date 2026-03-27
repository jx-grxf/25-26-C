#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    


    printf("===NUMBER ANALYSIS===\n");
    printf("=================================\n");

    printf("Please enter the number you want to analyse: \n");
    scanf("%d", &number);

    if (number > 99999 || number < -99999) {
        printf("ERROR! The number can only contain up to 5 digits. Try again \n");
        return 1;
    }

    printf("Analysis of number %d\n", number);
    printf("------------------------------------\n");

    if (number < 0) 
    {
        printf("negative - ");
       
    } else {
        printf("positive - ");
        
    }

    if (number % 2 == 0) 
    {
        printf("even - ");
        
    } else {
        printf("odd - ");
    }

    int temp = number;

    if (temp < 0) {
        temp = -temp;
    }

    if (temp < 10) 
    {
        printf("1 digit");
    } else if (temp >= 10 && temp < 100) {
        printf("2 digits");
    } else if (temp >= 100 && temp < 1000) {
        printf("3 digits");
    } else if (temp >= 1000 && temp < 10000) {
        printf("4 digits");
    } else {
        printf("5 digits");
    }
    

    return 0;
}