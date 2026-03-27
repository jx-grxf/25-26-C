#include <stdio.h>
#include <math.h>

int main () {

  double nominalCapital = 0;
  double interest = 0;
  double compoundCapital = 0;
  int duration = 0;

  printf("Nominal Capital: ");
  scanf("%lf", &nominalCapital);

  printf("Duration in years: ");
  scanf("%d", &duration);

  printf("Interest in percent: ");
  scanf("%lf", &interest);

  compoundCapital = nominalCapital * pow(1 + interest / 100, duration);

  printf("Compound capital after %d years: %.2lf EUR", duration, compoundCapital);





}