#include <stdio.h>

int main() {

    int digit;

    printf("===DELETE REALATED NUMBERS===\n");

    printf("Enter a digit between 1 and 9: ");
    scanf("%d", &digit);

    if (digit < 1 || digit > 9) {
        printf("Invalid input!\n");
        return 1;
    }

    for (int i = 0; i <= 99; i++) {
        int tens = i / 10;
        int ones = i % 10;
        int digitSum = tens + ones;

        int related = 0;

        if (tens == digit)
            related = 1;
        if (ones == digit)
            related = 1;
        if (digitSum == digit)
            related = 1;
        if (i % digit == 0)
            related = 1;

        if (related)
            printf("|| ");
        else
            printf("%2d ", i);

        if (i % 10 == 9)
            printf("\n");
    }

    return 0;
}