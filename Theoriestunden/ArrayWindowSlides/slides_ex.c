#include <stdio.h>

int main() {
    const int LENGTH = 10;
    
    int numbers[LENGTH];
    
    int window_lower = 0;
    int window_upper = 0;
    
    // Initialize numbers with 0, 1, 2, ...
    for(int i = 0; i < LENGTH; i++) {
        numbers[i] = i;
    }
    
    // Print numbers to the console
    printf("The numbers: ");
    printf("[");
    for(int i = 0; i < LENGTH-1; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("%d]\n", numbers[LENGTH-1]);
    
    do {
        printf("Enter lower and upper window (e.g. [1,2]):");
        scanf("[%d,%d]", &window_lower, &window_upper);
    } while(window_lower > window_upper || window_lower < 0);
    
    for (int i = 0; i < LENGTH; i++) {
        int window_sum = 0; 
        printf("Window center at: %d: ", numbers[i]);

        for (int j = i - window_lower; j <= i + window_upper; j++) {
            if (j >= 0 && j < LENGTH) {
                printf("%d ", numbers[j]);
                window_sum += j;
            }
        }

        printf("(sum of elements in window: %d)\n", window_sum);
    }
    return 0;
}
