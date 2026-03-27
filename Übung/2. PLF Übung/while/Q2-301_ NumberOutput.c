#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0;
    int counter = 0;

    printf("Please enter a number: "); scanf("%d", &counter);

    while (number <= counter) {
        printf("%d\n", number);
        number++;
    }

    return 0;
}