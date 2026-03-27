#include <stdio.h>

int main() {

    int userInput = 0;
    int limit = 0;

    int numberSq = 0;

    printf("Please enter the limit: ");
    scanf("%d", &userInput);

    while (limit <= userInput) {

        numberSq = limit * limit;

        printf("%d -     %d\n", limit, numberSq);

        limit++;
    }

    return 0;
}