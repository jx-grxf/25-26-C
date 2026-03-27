#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int throws = 0;
    int i = 0;
    int dice = 0;

    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

    srand(time(NULL));

    printf("===ROLE THE DICE===\n");

    printf("Number of throws: ");
    scanf("%d", &throws);

    while (i < throws) {
        dice = rand() % 6 + 1;

        if (dice == 1) {
            c1++;
        } else if (dice == 2) {
            c2++;
        } else if (dice == 3) {
            c3++;
        } else if (dice == 4) {
            c4++;
        } else if (dice == 5) {
            c5++;
        } else {
            c6++;
        }

        i++;
    }

    printf("Number of points 1: %d\n", c1);
    printf("Number of points 2: %d\n", c2);
    printf("Number of points 3: %d\n", c3);
    printf("Number of points 4: %d\n", c4);
    printf("Number of points 5: %d\n", c5);
    printf("Number of points 6: %d\n", c6);

    return 0;
}