#include <stdio.h>
#include <stdlib.h>

int main() {

    float number1 = 0.0f;
    float number2 = 0.0f;

    float result = 0.0f;

    char op = ' ';


    printf("=== CALCULATOR === \n");

    printf("Please enter the first number: \n");
    scanf("%f", &number1);

    printf("Please enter the operator (+,-,*,/): \n");
    scanf(" %c", &op);

    printf("Please enter the second number: \n");
    scanf("%f", &number2);

    switch (op)
    {
        case '+': {
            result = number1 + number2;
            printf("Result: %.2f + %.2f = %.2f\n", number1, number2, result);
            break;
        }

        case '-': {
            result = number1 - number2;
            printf("Result: %.2f - %.2f = %.2f\n", number1, number2, result);
            break;
        }

        case '*': {
            result = number1 * number2;
            printf("Result: %.2f * %.2f = %.2f\n", number1, number2, result);
            break;
        }

        case '/': {
            if (number2 == 0.0f) {
                printf("Invoice: Division by 0 is not allowed!\n");
            } else {
                result = number1 / number2;
                printf("Result: %.2f / %.2f = %.2f\n", number1, number2, result);
            }

            
            break;
        }

        default: {
            printf("Error! Something went wrong. Check your operator and try again. \n");
        }
    }

    

    return 0;
}