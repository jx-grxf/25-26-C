#include <stdio.h>
#include <stdlib.h>


int main() {

    int number1 = 0;
    int number2 = 0;
    
    printf("=== NUMBER SORTING ===\n");
    printf("================================\n");

    printf("Please enter Number 1: \n");
    scanf("%d", &number1);

    printf("Please enter Number 2: \n");
    scanf("%d", &number2);

    printf("Entered numbers: %d, %d\n", number1, number2);

    if (number1 < number2) {
        printf("Sorted numbers: %d, %d\n", number1, number2);
    } else {
        printf("Sorted numbers: %d, %d\n", number2, number1);
    }

    

    return 0;
}