#include <stdio.h>
#include <stdlib.h>

int main() {

    int month = 0;

    
    do {

        printf("Enter a number from 1 to 12: ");
        scanf("%d", &month);

    } while(month < 1 || month > 12);

    

    return 0;
}