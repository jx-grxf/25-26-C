#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main() {

    int hunderter = 0;
    int zehner = 0; 
    int einer = 0;

    int sum = 0;

    for (int i = 0; i < 999; i++)
    {
       hunderter = i / 100;
       zehner = (i / 10) % 10;
       einer = i % 10;

       sum = pow(hunderter, 3) + pow(zehner, 3) + pow(einer, 3);

       if (sum == i) 
       {
        printf("%d\n", i);
       }
    
    }

    

    return 0;
}