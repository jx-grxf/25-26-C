#include <stdio.h>

int main() {

    int userInput = 0;

    int limit = 0;

    printf("Please enter the limit:  ");
    scanf("%d", &userInput);

    while (limit <= userInput) {

        printf("%d\n", limit);
        limit++;
    }

    return 0;
}