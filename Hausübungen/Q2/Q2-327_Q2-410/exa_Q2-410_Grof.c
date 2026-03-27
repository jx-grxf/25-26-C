#include <stdio.h>

int main()
{
    double a;
    double x_old;
    double x_new;
    double difference;

    printf("Enter number: ");
    scanf("%lf", &a);

    if (a < 0)
    {
        printf("Square root of negative number not possible.\n");
        return 1;
    }

    if (a == 0)
    {
        printf("Square root: 0\n");
        return 0;
    }

    x_old = a;

    do
    {
        x_new = 0.5 * (x_old + a / x_old);

        difference = x_new - x_old;
        if (difference < 0)
        {
            difference = -difference;
        }

        x_old = x_new;

    } while (difference >= 0.000001);

    printf("Approximated square root: %.10f\n", x_new);

    return 0;
}