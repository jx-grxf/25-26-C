#include <stdio.h>

int main() {

    int startVal = 0;
    int endVal = 0;

    int temp;

    printf("Please enter the start value: ");
    scanf("%d", &startVal);

    printf("Please enter the end value: ");
    scanf("%d", &endVal);

    if (endVal < startVal) {

        temp = endVal;
        endVal = startVal;
        startVal = temp;
    }

    while (startVal <= endVal) {

        if (startVal % 2 != 0) {
            printf("%d\n", startVal);
        }

        startVal++;
    }
}