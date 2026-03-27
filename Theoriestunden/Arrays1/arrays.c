#include <stdio.h>

#define SIZE 20

int main() {

    int numbers[SIZE];

    numbers[0] = 3;
    numbers[1] = 7;
    numbers[2] = 5;
    numbers[7] = 2;

    numbers[SIZE - 1] = 5;

    for (int i = 0; i < SIZE; i++) 
    {
        printf("numbers [%d] hat den wert: %d \n",i , numbers[i]);
    }

    

    return 0;
}