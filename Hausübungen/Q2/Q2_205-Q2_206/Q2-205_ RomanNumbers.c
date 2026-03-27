#include <stdio.h>
#include <stdlib.h>

int main() {

    char romanNumber1 = ' ';
    char romanNumber2 = ' ';
    char romanNumber3 = ' ';

    int sum = 0;


    printf("==Roman Numbers Converter==\n");

    printf("Please enter a 3 digit roman number: \n");
    scanf(" %c %c %c", &romanNumber1, &romanNumber2, &romanNumber3);   


    switch (romanNumber1) {

        case 'I':
            sum += 1;
            break;

        case 'V':
            sum += 5;
            break;

        case 'X':
            sum+= 10;
            break;

        case 'L':
            sum+= 50;
            break;

        case 'C':
            sum+= 100;
            break;

        case 'D':
            sum += 500;
            break;

        case 'M':
            sum += 1000;
            break;

        case ' ':
            break;

        
        default: 
            printf("The roman number you entered is invalid! Please try again.\n");
            return 1;


    }


    switch (romanNumber2) {

        case 'I':
            sum += 1;
            break;

        case 'V':
            sum += 5;
            break;

        case 'X':
            sum+= 10;
            break;

        case 'L':
            sum+= 50;
            break;

        case 'C':
            sum+= 100;
            break;

        case 'D':
            sum += 500;
            break;

        case 'M':
            sum += 1000;
            break;

        case ' ':
            break;

        
        default: 
            printf("The roman number you entered is invalid! Please try again.\n");
            return 1;


    }


    switch (romanNumber3) {

        case 'I':
            sum += 1;
            break;

        case 'V':
            sum += 5;
            break;

        case 'X':
            sum+= 10;
            break;

        case 'L':
            sum+= 50;
            break;

        case 'C':
            sum+= 100;
            break;

        case 'D':
            sum += 500;
            break;

        case 'M':
            sum += 1000;
            break;

        case ' ':
            break;

        
        default: 
            printf("The roman number you entered is invalid! Please try again.\n");
            return 1;


    }


    printf("The roman number: %c%c%c is decimal %d.", romanNumber1, romanNumber2, romanNumber3, sum);

    return 0;


}