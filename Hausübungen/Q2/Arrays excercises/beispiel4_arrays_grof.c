#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
#define UPPER 40
#define LOWER 10

int main()
{

    int numbers[SIZE];

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
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

    for (int i = 4; i < SIZE; i += 5)
    {
        numbers[i] = 0;
    }
    printf("jedes 5 = 0:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    for (int i = 0; i < SIZE; i += 2) {

        int temp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = temp;
    }
    printf("paarweise:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    for (int i = 0; i < SIZE; i+= 3) {

        int temp2 = numbers[i];
        numbers[i] = numbers[i + 2];
        numbers[i + 2] = temp2;
    }
    printf("vertauschen 1-3.....:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((i + 1) % 6 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
