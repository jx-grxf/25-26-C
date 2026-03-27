#include <stdio.h>
#include <stdlib.h>


int main() {

    int startValue = 0;
    int stopValue = 0;
    int temp = 0;
    int i = 0;

    printf("Please enter the starting Value: \n");
    scanf("%d", &startValue);

    printf("Please enter the stop Value: \n");
    scanf("%d", &stopValue);

    if (stopValue < startValue) {

        temp = startValue;
        startValue = stopValue;
        stopValue = temp;

    }

    i = startValue;

    while (i <= stopValue) {

        if (i % 2 != 0) {
            printf("%d", i);

            if (i + 2 <= stopValue) {
                printf(", ");
            }
        }

        i++;

        

    }

    

    return 0;
}