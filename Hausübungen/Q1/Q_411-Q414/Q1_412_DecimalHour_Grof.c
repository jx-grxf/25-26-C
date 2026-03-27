#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    double decimalHours = 0;
    double decimalMinutes = 0;
    double decimalSeconds = 0;

    printf("Please enter the hours: ");
    scanf("%d", &hours);

    printf("Please enter the minutes: ");
    scanf("%d", &minutes);

    printf("Please enter the seconds: ");
    scanf("%d", &seconds);

    decimalMinutes = minutes / 60.0;
    
    decimalSeconds = seconds / 3600.0;


    decimalHours = hours + decimalMinutes + decimalSeconds;

    printf("The time: %d:%d:%d equals %.4f decimal hours ", hours, minutes, seconds, decimalHours);

    return 0;


}