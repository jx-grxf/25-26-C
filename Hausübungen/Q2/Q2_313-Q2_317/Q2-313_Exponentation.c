#include <stdio.h>


int main()
{

    int base = 0;
    int exponent = 0;
    double result = 1.0;

    printf("Please enter the base: ");
    scanf("%d", &base);

    printf("Please enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent > 0)
    {

        for (int start = 0; start < exponent; start++)
        {
            result = result * base;
        }
    }
    else if (exponent < 0)
    {

        for (int start = 0; start > exponent; start--)
        {
            result = result * base;
        }

        result = 1.0 / result;
    }
    else
    {
        result = 1.0;
    }

    printf("%d ^ %d = %lf", base, exponent, result);

    return 0;
}