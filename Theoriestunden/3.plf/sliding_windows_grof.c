#include <stdio.h>

#define SIZE 8

int main()
{
    char letters[] = { 'X', 'A', 'B', 'Y', 'V', 'N', 'X', 'O' };

    int windowSize = 4;
    float average = 0.f;

    for (int i = 0; i < SIZE - windowSize + 1; i++)
    {
        printf("Window %d: ", i + 1);

        average = 0.f;

        for (int j = 0; j < windowSize; j++)
        {
            printf("%c ", letters[i + j]);
            average += letters[i + j];
        }

        average /= windowSize;

        printf("Average value/character: %.2f / %c", average, (char)average);
        printf("\n");
    }

    return 0;
}