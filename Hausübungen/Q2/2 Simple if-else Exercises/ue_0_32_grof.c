#include <stdio.h>

int main () {

    int distanceM = 0;
    int time = 0;

    float speed = 0.0f;
    float speedKMH = 0.0f;


    printf("Please insert the distance in m: ");
    scanf("%d", &distanceM);

    printf("Please insert the time in s: ");
    scanf("%d", &time);


    speed = distanceM / time;

    if (speed > 1000.0f) {

        speedKMH = speed * 3.6f;
        printf("Speed v = %.2f km/h\n", speedKMH);
    } else {

        printf("Speed v = %.2f m/s\n", speed);

    
    }

    
    return 0;

}