#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main()
{

    int numbers[SIZE];
    int numbersSwitched[SIZE];

    int vielfache = 5;

    int einerstelle = 0;
    int zehnerstelle = 0;

    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = vielfache;
        vielfache += 5;
    }

    printf("---Exercise 2---\n");
    printf("---Original Field---\n");

    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("%d  ", numbers[i]);

        if ((SIZE - i) % 5 == 0)
        {
            printf("\n");
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        einerstelle = numbers[i] % 10;
        zehnerstelle = numbers[i] / 10;

        numbers[i] = einerstelle * 10 + zehnerstelle;
        
    }

    printf("\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", numbers[i]);

        if ((SIZE - i) % 5 == 0)
        {
            printf("\n");
        }
    }

   return 0;
}