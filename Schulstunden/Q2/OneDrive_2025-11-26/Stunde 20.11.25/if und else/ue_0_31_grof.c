#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    printf("Please insert the first value: ");
    scanf("%d", &a);

    printf("Please insert the second value: ");
    scanf("%d", &b);

    printf("Please insert the third value: ");
    scanf("%d", &c);

    
    if (a > b) {
        printf("%d is NOT SMALLER than %d\n", a, b);
    } else {
        printf("%d is smaller than %d\n", a, b);
    }

    
    if (a <= c && c <= b) {
        printf("The value %d is between %d and %d\n", c, a, b);
    } else {
        printf("The value %d is NOT between %d and %d\n", c, a, b);
    }

    return 0;
}
