#include <stdio.h>
#include <stdlib.h>


#define EUR_TO_USD 1.10
#define USD_TO_EUR 0.90

int main() {

    int category = 0;
    int subCategory = 0;

    double value = 0.0;
    


    printf("===MULTITOOL CONVERTER===\n");

    printf("Please choose a category you want to convert (1:Temperature), (2: Currency).\n");
    scanf("%d", &category);


    switch (category) {

        case 1: //Temp

            printf("==TEMPERATURE MODE==\n");
            printf("Enter (1 for Celsius to Fahrenheit) or (2 for Farenheit to celsius).\n");
            scanf("%d", &subCategory);

            

            switch (subCategory) {

                case 1: 
                    printf("==Celsius to Farenheit==\n");

                    printf("Please enter the value you want to convert: \n");
                    scanf("%lf", &value);

                    value = value * 1.8 + 32;

                    printf("Result: %.2lf\n", value);
                    break;


                case 2:
                    printf("==Fahrenheit to Celsius==\n");
                    
                    printf("Please enter the value you want to convert: \n");
                    scanf("%lf", &value);

                    value = (value - 32) / 1.8;

                    printf("Result: %.2lf \n", value);
                    break;

                    

                
                default:
                    printf("The number you entered is invalid, please enter a valid number!");
                    return 1; 
                    
                

            
            }
            
            break;
            

        case 2: // Currency 

            printf("==CURRENCY MODE==");
            printf("Enter (1 for EUR to USD) or (2 for USD to EUR).\n");
            scanf("%d", &subCategory);
            

            switch (subCategory) {

                case 1: 
                    printf("==EUR to USD==\n");

                    printf("Please enter the amount in EUR you want to convert to USD: \n");
                    scanf("%lf", &value);

                    value *= EUR_TO_USD;

                    printf("Result: %.2lf USD", value);

                    break;


                case 2: 
                    printf("==USD to EUR==\n");

                    printf("Please enter the amount in USD you want to convert to EUR: \n");
                    scanf("%lf", &value);

                    value *= USD_TO_EUR;

                    printf("Result: %.2lf EUR\n", value);

                    break;

                default:
                    printf("The number you entered is invalid, please enter a valid number!");
                    return 1;

                    
            
            
            }

            break;

            
        default:
            printf("The number you entered is invalid, please enter a valid number!");
            return 1;
            

    
    }

    


    return 0;
}




