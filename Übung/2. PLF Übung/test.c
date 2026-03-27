#include <stdio.h>
#include <stdlib.h>

int main() {

    int month = 0;

    printf("Please enter your month");
    scanf("%d", &month);

    switch (month) {

        case 1:
        case 8:
            printf("Your Month is august");
    }

    

    return 0;
}