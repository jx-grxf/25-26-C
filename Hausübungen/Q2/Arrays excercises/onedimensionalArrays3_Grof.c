#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 24
#define UPPER 32.00
#define LOWER -32.00

int main() {

    double numbers[24];

    int negativeElements = 0;
    int threeAtTen = 0;
    int twoAtTen = 0;
    int einstelligerV = 0;

    srand(time(NULL));

    printf("---Arrays 3---\n");

    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = LOWER + (double)rand() / RAND_MAX * (UPPER - LOWER);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%8.2f", numbers[i]);

        if ((i + 1) % 8 == 0)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] < 0)
        {
            negativeElements++;
        }
    }

    for (int i = 0; i < SIZE; i++) 
    {
        int zehnerstelle = ((int)fabs(numbers[i]) / 10) % 10;
        int zehntelstelle = ((int)(fabs(numbers[i]) * 10)) % 10;

        if (zehnerstelle == 3)
        {
            threeAtTen++;
        }

        if (zehntelstelle == 2)
        {
            twoAtTen++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        int temp = 0;

        temp = (int)fabs(numbers[i]);

        if (temp < 10) {
            einstelligerV++;
        }
    }

    printf("===NEGATIVE ELEMENTS===: %d\n", negativeElements);
    printf("===THREE AT TEN===:%d\n", threeAtTen);
    printf("===TWO AT TENS===: %d\n", twoAtTen);
    printf("===EINSTELLIGER VORKOMMATEIL===: %d\n", einstelligerV);

    return 0;
} 
