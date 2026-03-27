#include <stdio.h>
#include <math.h>

int main() {

  int integer1 = 0;
  int integer2 = 0;


  printf("Number 1: ");
  scanf("%d", &integer1);

  printf("Number 2: ");
  scanf("%d", &integer2);

  printf("Entered numbers: %d, %d\n", integer1, integer2);


  if (integer1 < integer2) {

    printf("Sorted numbers: %d, %d\n", integer1, integer2);
  } else {

    printf("Sorted numbers: %d, %d\n", integer2, integer1);
  }

  return 0;
}