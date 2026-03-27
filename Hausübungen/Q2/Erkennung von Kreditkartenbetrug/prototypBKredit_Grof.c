#include <stdio.h>
#include <math.h>

#define SIZE 20

int main()
{
    float transactions[] =
        {500.75, 200.50, 1000.00, 700.25, 300.30,
         400.10, 600.90, 900.45, 800.00, 100.50,
         250.60, 350.75, 450.40, 550.20, 650.30,
         750.80, 850.60, 950.90, 1200.00, 1300.50};

  
    // Mittelwert berechnen

    float sum = 0.f;

    for (int i = 0; i < SIZE; i++)
    {
        sum += transactions[i];
    }

    float average = sum / SIZE;

    printf("Mean value over all transactions: %.2f\n", average);

    
    // Standardabweichung

    float sumSquares = 0.f;

    for (int i = 0; i < SIZE; i++)
    {
        float diff = transactions[i] - average; // Abstand
        sumSquares += diff * diff;             
    }

    float sAbweichung = sqrt(sumSquares / SIZE);

    printf("Standard deviation: %.2f\n", sAbweichung);

    int windowSize = 0;
    float threshold = 0.f;

    do
    {
        printf("\nPlease enter the window size: ");
        scanf("%d", &windowSize);

        printf("\nPlease enter the threshold: ");
        scanf("%f", &threshold);
    } while (windowSize <= 0 || windowSize > SIZE || threshold < 0);

    int numberOfWindows = SIZE - windowSize + 1;

    printf("/n %d windows will be analysed now...\n", numberOfWindows);

    //Fenster analysieren

    for (int i = 0; i < SIZE - windowSize + 1; i++)
    {
        float sum = 0.f;
        float windowAvarage = 0.f;

        printf("Window %d: [", i + 1);

        for (int j = 0; j < windowSize; j++)
        {
            printf(" %.2f   ", transactions[j + i]);
            sum += transactions[j + i];
        }

        float zScore = 0.f;

        zScore = (windowAvarage - average) / sAbweichung;

        printf("]");
        windowAvarage = sum / windowSize;
        printf("    - Average = %.2f ", windowAvarage);
        printf(" - Z-Score = %.2f", zScore);
        printf("\n");
    }
    
    // Z-Score 

    



    return 0;
}