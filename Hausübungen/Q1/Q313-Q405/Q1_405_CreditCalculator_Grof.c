#include <stdio.h>
#include <math.h>

int main() {

    double monthlyRate = 0.0;
    double interestRate = 0.0;
    double compoundCapital = 0.0;
    int term = 0;

    printf("Monthly rate in EUR: ");
    scanf("%lf", &monthlyRate);

    printf("Term in months: ");
    scanf("%d", &term);

    printf("Interest rate (in %%): ");
    scanf("%lf", &interestRate);

    double q = 1 + interestRate / (12 * 100);
    compoundCapital = monthlyRate * (1 - pow(q, term)) / (1 - q);

    printf("Total capital paid after %d months: %.2lf\n ", term, compoundCapital);

    return 0;



}