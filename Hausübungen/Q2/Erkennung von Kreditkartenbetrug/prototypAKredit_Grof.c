#include <stdio.h>

#define SIZE 20


int main() 
{
    float transaction[] = {500.75, 200.50, 1000.00,  700.25,  300.30,
                  400.10, 600.90,  900.45,  800.00,  100.50, 
                  250.60, 350.75,  450.40,  550.20,  650.30,  
                  750.80, 850.60,  950.90, 1200.00, 1300.50};

    int windowSize = 0;
    float threshold = 0.0f;

    int suspiciousCount = 0;


    // Prototyp A

    do{
        printf("Please enter the window size: ");
        scanf("%d", &windowSize);

        printf("Please enter the threshold size: ");
        scanf("%f", &threshold);
    } while(windowSize <= 0 || windowSize > SIZE || threshold < 0);

    int numberWindows = SIZE - windowSize + 1;

    printf("%d windows will be analysed now.....\n", numberWindows);

    for (int i = 0; i <= SIZE - windowSize; i++)
    {
        float sum = 0.0f;
        sum = 0.0;
        
        printf("Window %d: [", i);

        for (int j = i; j < i + windowSize; j++)
        {
            sum += transaction[j];

            printf("%.2f  ", transaction[j]);
        }

        float average = sum / windowSize;

        if (average > threshold)
        {
            suspiciousCount++;
        }

        printf("]   - Average = %.2f\n", average); 
    }

    printf("Suspicious windows: %d", suspiciousCount);







    return 0;
}