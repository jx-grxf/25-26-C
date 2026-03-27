#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    printf("==== PI CALCULATION ===");

    printf("Added elements: ");
    scanf("%d", &n);

    
    double wallis = 1.0;
    for (int i = 1; i <= n; i++)
    {
        wallis *= (2.0 * i) / (2.0 * i - 1);
        wallis *= (2.0 * i) / (2.0 * i + 1);
    }
    wallis *= 2;

    
    double leibniz = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            leibniz += 1.0 / (2 * i + 1);
        else
            leibniz -= 1.0 / (2 * i + 1);
    }
    leibniz *= 4;

    
    double euler = 0.0;
    for (int i = 1; i <= n; i++)
    {
        euler += 1.0 / (i * i);
    }
    euler = sqrt(6 * euler);

    
    printf("procedure | Deviation from M_PI\n");
    printf("----------|-------------------\n");
    printf("Wallis | %.4f\n", (M_PI - wallis));
    printf("Leibniz | %.3f\n", (M_PI - leibniz));
    printf("Euler  | %.3f\n", (M_PI - euler));

    return 0;
}
