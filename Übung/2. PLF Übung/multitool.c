#include <stdio.h>
#include <stdlib.h>

#define EUR_TO_USD 1.10
#define USD_TO_EUR 0.90

int main()
{

    int category = 0;
    int subcategory = 0;

    float tempValue = 0;
    float tempValueCalculated = 0;

    float currencyValue = 0;
    float currencyValueCalculated = 0;

    int userChoice = 0;


    while (userChoice == 0) {

    printf("===MULTITOOL CONVERTER===\n");

    printf("Please choose a category (1-Temp), (2-Currency): \n");
    scanf("%d", &category);

    
    
    switch (category)
    {

    case 1:
        printf("===TEMP===\n");
        printf("Enter (1 -> Celsius to farenheit), (2 -> Farenheit to celsius): \n");
        scanf("%d", &subcategory);

        switch (subcategory)
        {

        case 1:
            printf("===Celsius to Fahrenheit===\n");
            printf("Please enter the value you want to convert: \n");
            scanf("%f", &tempValue);

            tempValueCalculated = tempValue * 1.8 + 32;

            printf("%.2f Celsius converted to Farenheit is %.2f.\n", tempValue, tempValueCalculated);

            break;

        case 2:
            printf("===Fahrenheit to Celsius===\n");
            printf("Please enter the value you want to convert: \n");
            scanf("%f", &tempValue);

            tempValueCalculated = (tempValue - 32) / 1.8;

            printf("%.2f Farenheit converted to Celsius is %.2f\n", tempValue, tempValueCalculated);

            break;

        default:
            printf("The number you entered is invalid! Try again.\n");
            break;
        }

        

    break;

    case 2:
        printf("===Currency===\n");
        printf("Enter (1 -> EUR TO USD), (2 -> USD TO EUR): \n");
        scanf("%d", &subcategory);

        switch (subcategory)
        {

        case 1:
            printf("===EUR TO USD===\n");
            printf("Please enter the value you want to convert: \n");
            scanf("%f", &currencyValue);

            currencyValueCalculated = currencyValue * EUR_TO_USD;

            printf("%.2f EUR calculated to USD are %.2f.\n", currencyValue, currencyValueCalculated);

            break;

        case 2:
            printf("===USD TO EUR===\n");
            printf("Please enter the value you want to convert: \n");
            scanf("%f", &currencyValue);

            currencyValueCalculated = currencyValue * USD_TO_EUR;

            printf("%.2f USD calculated to EUR are %.2f\n", currencyValue, currencyValueCalculated);

            break;

        default:
            printf("The number you entered is invalid! Try again.\n");
            break;

        
        }

        break;


    default:
        printf("The number you entered is invalid! Try again.\n");
        break;
     
        
    break;
    }

    printf("\nIf you want to restart press 0, to stop the programm press 1: \n");
    scanf("%d", &userChoice);

    } 

    

    

    return 0;
}