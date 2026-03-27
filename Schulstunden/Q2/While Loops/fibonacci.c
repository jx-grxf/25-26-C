#include <stdio.h>

int main()
{

    int counter = 3;
    int maxcounter = 7;
    int fib_1 = 0;
    int fib_2 = 1;
    int fib_neu = 0;

    printf("%d, %d", fib_1, fib_2);

    while (counter <= maxcounter)
    {

        printf(", ");
        fib_neu = fib_1 + fib_2;
        printf("%d", fib_neu);
        fib_1 = fib_2;
        fib_2 = fib_neu;

        counter++;
    }
}
