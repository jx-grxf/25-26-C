#include <stdio.h>

#define SIZE 8

int main()
{   
    char letters[] = { 'X', 'A', 'B', 'Y', 'V', 'N', 'X', 'O' };

    for (int i = 0; i < SIZE / 2; i++)
    {
        char temp = letters[i];
        letters[i] = letters[SIZE - i - 1];
        letters[SIZE - i - 1] = temp; 
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", letters[i]);
    }

    return 0;
}