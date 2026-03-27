#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER_VALUE 15 
#define LOWER_VALUE 5

int main () {

  int randValue = 0;

  srand(time(NULL));
  
  randValue = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;

  printf("Die maximale Zufallszahl lautet: %d\n", RAND_MAX);
  printf("Zufallszahl lautet: %d ", randValue);

  return 0;

}