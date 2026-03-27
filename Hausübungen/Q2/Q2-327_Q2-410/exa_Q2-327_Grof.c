#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);


    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    if (b == 0)
    {
        printf("Greatest Common Divisor: %d\n", a);
    }
    else
    {
        printf("Greatest Common diivisor: %d\n", b);
    }

    return 0;
}