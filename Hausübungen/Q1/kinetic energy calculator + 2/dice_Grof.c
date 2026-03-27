#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPPER_VALUE 6
#define LOWER_VALUE 1
#define UPPER_MULTIPLIER 0.50
#define LOWER_MULTIPLIER 3.00


int main() {

  int die1 = 0;
  int die2 = 0;
  int sum = 0;
  int product = 0;
  float multiplier = 0;
  double payout = 0;

  srand(time(NULL));

  die1 = LOWER_VALUE + ((float)rand() / RAND_MAX) * (UPPER_VALUE - LOWER_VALUE);
  die2 = LOWER_VALUE + ((float)rand() / RAND_MAX) * (UPPER_VALUE - LOWER_VALUE);
  multiplier = LOWER_VALUE + ((float)rand() / RAND_MAX) * (UPPER_VALUE - LOWER_VALUE);

  sum = die1 + die2;
  product = die1 * die2;
  payout = (sum + product) * multiplier;

  printf("Die1: %d\n", die1);
  printf("Die2: %d\n", die2);
  printf("Sum: %d\n", sum);
  printf("Product: %d\n", product);
  printf("Payout: %.2lf\n", payout);

  return 0;


  

}