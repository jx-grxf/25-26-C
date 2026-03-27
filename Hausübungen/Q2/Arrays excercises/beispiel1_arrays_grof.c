#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define UPPER 25
#define LOWER -25

int main()
{

    int numbers[SIZE];

    double average = 0.0;
    int maxElements;
    int minElements;
    int evenElemnts = 0;
    int numbersAdded = 0;

    srand(time(NULL));

    
    for (int i = 0; i < SIZE; i++)
    {

        numbers[i] = rand() % (UPPER - LOWER + 1) + LOWER;
        numbersAdded += numbers[i];
    }

    for (int d = 0; d < SIZE; d++)
    {

        if (d < SIZE - 1)
        {

            printf("%d, ", numbers[d]);
        }
        else
        {
            printf("%d", numbers[d]);
        }
    }

    for (int i = 1; i < SIZE; i++)
    {

        if (numbers[i] % 2 == 0)
        {
            evenElemnts++;
        }
    }

    maxElements = numbers[0];
    minElements = numbers[0];

    for (int i = 1; i < SIZE; i++)
    {

        if (numbers[i] > maxElements)
        {
            maxElements = numbers[i];
        }

        if (numbers[i] < minElements)
        {
            minElements = numbers[i];
        }
    }

    average = (double)numbersAdded / SIZE;

    printf("\n%d", maxElements);
    printf("\n%d", minElements);
    printf("\n%.3lf", average);

    return 0;
}
