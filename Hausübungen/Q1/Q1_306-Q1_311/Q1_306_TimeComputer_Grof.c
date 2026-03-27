#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {

    int inputSeconds = 0;
    int outputSeconds = 0;
    int hours = 0;
    int minutes = 0;

    printf("Please enter the number of seconds since midnight: ");
    scanf("%d", &inputSeconds);

    hours = inputSeconds / 3600;
    minutes = (inputSeconds % 3600) / 60;
    outputSeconds = inputSeconds % 60;

    printf("Time: %d:%d:%d", hours, minutes, outputSeconds);

    return 0;
}