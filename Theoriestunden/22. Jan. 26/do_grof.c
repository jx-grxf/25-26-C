#include <stdio.h>
#include <stdlib.h>

int main() {

    int choice = 0;
    int choice2 = 0;

    do
    {
        printf("Please enter: ");
        scanf("%d %d", &choice, &choice2);
    } while (choice == 1 && choice2 == 67);
    

    

    return 0;
}