#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 24

int main() {

    double numbers[SIZE];

    int negativNumbers = 0;
    int tens3 = 0;
    int tens2 = 0;
    int vorkomma1 = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        numbers[i] = -32.0 + ((double)rand() / RAND_MAX) * 64.0;
    }

    printf("Feld:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%8.2f", numbers[i]);
        if ((i + 1) % 8 == 0) {
            printf("\n");
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < 0) {
            negativNumbers++;
        }

        double x = numbers[i];
        if (x < 0) {
            x = -x;
        }

        int vorkomma = (int)x;
        if (vorkomma < 10) {
            vorkomma1++;
        }

        int zehner = (vorkomma / 10) % 10;
        if (zehner == 3) {
            tens3++;
        }

        int zehntel = ((int)(x * 10)) % 10;
        if (zehntel == 2) {
            tens2++;
        }
    }

    printf("\nAnzahl negativer Elemente: %d\n", negativNumbers);
    printf("Anzahl mit 3 an der Zehnerstelle: %d\n", tens3);
    printf("Anzahl mit 2 an der Zehntelstelle: %d\n", tens2);
    printf("Anzahl mit einstelligem Vorkommateil: %d\n", vorkomma1);

    return 0;
}
