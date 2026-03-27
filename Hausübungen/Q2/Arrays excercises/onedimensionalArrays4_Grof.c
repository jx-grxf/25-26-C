#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 40

int main() {

    char letters[SIZE];

    int lines = 0;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        letters[i] = 'a' + rand() % 26;
    }

    do
    {
        printf("Linebreak [1;40]: ");
        scanf("%d", &lines);
    } while (lines < 1 || lines > 40);


    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", letters[i]);

        if ((i + 1) < SIZE)
        {
            printf(" - ");
        }

        if ((i + 1) % lines == 0)
        {
            printf("\n");
        }
    }    

    return 0;
    
}
 