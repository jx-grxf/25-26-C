#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main() {

    char letters[SIZE];

    int vocals[5] = {0};
    int smallestIndex = 0;
    int biggestIndex = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) 
    {
        letters[i] = 'a' + rand() % 26;
    }

    for (int i = 0; i < SIZE; i++) 
    {
        printf("%c  ", letters[i]);

        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    smallestIndex = 0;
    biggestIndex = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (letters[i] < letters[smallestIndex])
        {
            smallestIndex = i;
        }

        if (letters[i] >= letters[biggestIndex])
        {
            biggestIndex = i;
        }

    }

    for (int i = 0; i < SIZE; i++)
    {
        switch (letters[i])
        {
            case 'a':
                vocals[0]++;
                break;

            case 'e':
                vocals[1]++;
                break;

            case 'i':
                vocals[2]++;
                break;

            case 'o':
                vocals[3]++;
                break;

            case 'u':
                vocals[4]++;
                break;
        }
    }

    printf("\n");

    printf("Anzahl der a's: %d\n", vocals[0]);
    printf("Anzahl der e's: %d\n", vocals[1]);
    printf("Anzahl der i's: %d\n", vocals[2]);
    printf("Anzahl der o's: %d\n", vocals[3]);
    printf("Anzahl der u's: %d\n", vocals[4]);

    printf("\n");

    char temp = letters[smallestIndex];
    letters[smallestIndex] = letters[biggestIndex];
    letters[biggestIndex] = temp;

     for (int i = 0; i < SIZE; i++) 
    {
        printf("%c  ", letters[i]);

        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;


}