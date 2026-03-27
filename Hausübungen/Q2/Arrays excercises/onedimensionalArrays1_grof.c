#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30
#define UPPER 200
#define LOWER 1

int main() {

    int numbers[SIZE];

    int largestElement = 0;
    int smallestElement = 0;

    int even = 0;
    int odd = 0;

    srand(time(NULL));


    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = rand() % (UPPER - LOWER + 1) + LOWER;
    }

    printf("---EXERCISE 1---\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", numbers[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    smallestElement = numbers[0];
    largestElement = numbers[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] < smallestElement) {
            smallestElement = numbers[i];
        }

        if (numbers[i] > largestElement) {
            largestElement = numbers[i];
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("---RESULTS---\n");

    printf("Largest element in the array: %d\n", largestElement);
    printf("Smallest element in the array: %d\n", smallestElement);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
