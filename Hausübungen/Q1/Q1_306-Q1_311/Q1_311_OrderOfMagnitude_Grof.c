#include <stdio.h>
#include <math.h>

int main() {

    int inputNumber = 0;
    int onesPlace = 0;
    int tensPlace = 0;
    int hundredsPlace = 0;
    int thousandsPlace = 0;
    int tThousandsPlace = 0;

    printf("Please enter a five-digit number: ");
    scanf("%d", &inputNumber);

    tThousandsPlace = inputNumber / 10000;            
    thousandsPlace = (inputNumber / 1000) % 10;      
    hundredsPlace = (inputNumber / 100) % 10;       
    tensPlace = (inputNumber / 10) % 10;        
    onesPlace = inputNumber % 10;               

    printf("ten thousands: %d\n", tThousandsPlace);
    printf("thousands: %d\n", thousandsPlace);
    printf("hundreds: %d\n", hundredsPlace);
    printf("tens: %d\n", tensPlace);
    printf("ones: %d\n", onesPlace);

    return 0;



}