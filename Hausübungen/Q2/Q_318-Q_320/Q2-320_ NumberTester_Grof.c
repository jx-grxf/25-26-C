#include <stdio.h>

int main() {

    for (int number = 100; number <= 999; number++) {

        int hundreds = number / 100;
        int tens = (number / 10) % 10;
        int ones = number % 10;

        
        if (hundreds != 0 && tens != 0 && ones != 0) {

            if (number % hundreds == 0 && number % tens == 0 && number % ones == 0) {

                printf("Number found: %d\n", number);
            }
        }
    }

    return 0;
}