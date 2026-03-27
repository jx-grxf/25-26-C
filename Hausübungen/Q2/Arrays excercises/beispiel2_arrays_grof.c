#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 122
#define LOWER 97
#define SIZE 20

int main()
{
    char letters[SIZE] = {0};

    int smallest;
    int biggest;
    int minIndex = 0;
    int maxIndex = 0;

    int vowels[5] = {0};

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        letters[i] = (char)(rand() % (UPPER - LOWER + 1) + LOWER);
    }

    smallest = letters[0];
    biggest = letters[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (letters[i] < smallest)
        {
            smallest = letters[i];
            minIndex = i;
        }

        if (letters[i] >= biggest)
        {
            biggest = letters[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        switch (letters[i])
        {
        case 'a': vowels[0]++; break;
        case 'e': vowels[1]++; break;
        case 'i': vowels[2]++; break;
        case 'o': vowels[3]++; break;
        case 'u': vowels[4]++; break;
        }
    }

    printf("\n===LETTERS===\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", letters[i]);
        if ((i + 1) % 5 == 0) printf("\n");
    }

    printf("\n===SMALLEST AND BIGGEST ELEMENTS===\n");
    printf("Biggest element: [Char] = %c [ASCII] = %d [Index] = %d\n", biggest, biggest, maxIndex);
    printf("Smallest element: [Char] = %c [ASCII] = %d [Index] = %d\n", smallest, smallest, minIndex);

    printf("\n===VOWELS===\n");
    printf("A's = %d\n", vowels[0]);
    printf("E's = %d\n", vowels[1]);
    printf("I's = %d\n", vowels[2]);
    printf("O's = %d\n", vowels[3]);
    printf("U's = %d\n", vowels[4]);

    char temp = letters[minIndex];
    letters[minIndex] = letters[maxIndex];
    letters[maxIndex] = temp;

    printf("\n===LETTERS AFTER SWAP===\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", letters[i]);
    }

    return 0;
}
