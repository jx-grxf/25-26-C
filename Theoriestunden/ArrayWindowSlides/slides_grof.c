#include <stdio.h>

#define LENGTH 10

int main() {
    int numbers[LENGTH];

    // Array mit 0 bis 9 füllen
    for (int i = 0; i < LENGTH; i++) {
        numbers[i] = i;
    }

    // Array ausgeben
    printf("Array: ");
    for (int i = 0; i < LENGTH; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    // Sliding Window: 1 links und 1 rechts
    for (int i = 0; i < LENGTH; i++) {
        int sum = 0;

        printf("Fenster bei Index %d: ", i);

        for (int j = i - 1; j <= i + 1; j++) {
            if (j >= 0 && j < LENGTH) {
                printf("%d ", numbers[j]);
                sum += numbers[j];
            }
        }

        printf("-> Summe = %d\n", sum);
    }

    return 0;
}