#include <stdio.h>

int main() {
    
    int intNumber1 = 0; 
    int intNumber2 = 0; 
    int intSum = 0;

    printf("Please enter two integer numbers: ");
    scanf("%d %d", &intNumber1, &intNumber2);
    intSum = intNumber1 + intNumber2;
    printf("The sum of %d and %d is %d. \n\n ", intNumber1, intNumber2, intSum);

    return 0;


}