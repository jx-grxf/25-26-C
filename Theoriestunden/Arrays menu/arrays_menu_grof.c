#include <stdio.h>

#define SIZE 20 
#define LOWER 1 
#define UPPER 99

int main() {

    int numbers[SIZE];
    int input = 0;

    srand(time(NULL));

    do {

        printf("---MENUE---\n");
        printf("1. FIll arrays with random numbers.\n");
        printf("2. Print array.\n");
        printf("3. Switch 1st with 3rd, 4th with 6th, and so on...\n");
        printf("Exchange ones-place with tens-place\n");
        printf("5. Exit program.\n");

        scanf("Enter menu point: %d", &input);

        switch (input) {

            case 1:

                for (int i = 0; i < SIZE; i++)
                {
                    numbers[i] = LOWER + rand() % (UPPER - LOWER + 1);
                }
                break;

            case 2:

                for (int i = 0; i < SIZE; i++) 
                {
                    printf("%d ", numbers[i]);
                }
                printf("/n");  
                break;

            case 3:

                
                break;

            case 4:
                break;


        }


    } while(input != 5);


}