#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_VALUE 45
#define LOWER_VALUE 1

int main () {

  int lotto1 = 0;
  int lotto2 = 0;
  int lotto3 = 0;
  int lotto4 = 0;
  int lotto5 = 0;
  int lotto6 = 0;
  int lotto7 = 0;
  int additionalNumber = 0;


  srand(time(NULL));

  lotto1 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto2 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto3 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto4 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto5 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto6 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;
  lotto7 = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;

  additionalNumber = rand() % (UPPER_VALUE - LOWER_VALUE +1) + LOWER_VALUE;


  printf("The following lotto numbers have been drawn: %d, %d, %d, %d, %d, %d\n", lotto1, lotto2, lotto3, lotto4, lotto5, lotto6);
  printf("Additional Number: %d", additionalNumber);

  return 0;



}