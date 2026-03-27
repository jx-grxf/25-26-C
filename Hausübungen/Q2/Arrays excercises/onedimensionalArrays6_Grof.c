#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
#define UPPER 40
#define LOWER 10

int main() {

    int numbers[SIZE];

    srand(time(NULL));

    printf("---Arrays 6---\n");

    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % (UPPER - LOWER + 1) + LOWER;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");
    printf("Jedes 5te = 0\n");

    for (int i = 0; i < SIZE; i ++)
    {
        if ((i + 1) % 5 == 0)
        {
            numbers[i] = 0;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }

    printf("Paarweise:\n");

    for (int i = 0; i < SIZE; i += 2)
    {
        int temp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }

    printf("Erstes mit drittem:\n");

    for (int i = 0; i < SIZE; i+=3)
    {
        int temp = numbers[i];
        numbers[i] = numbers[i + 2];
        numbers[i + 2] = temp;
    }

     for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }


    



    return 0;
}