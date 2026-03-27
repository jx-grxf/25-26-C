#include <stdio.h>

int main() {
  

  int side = 0;
  int surfaceArea = 0;
  int volume = 0;

  printf("Please enter the side: ");
  scanf("%d", &side);

  surfaceArea = 6 * (side * side);
  volume = side * side * side;

  printf("The Surface is: %d\n", surfaceArea);
  printf("The Volume is: %d\n", volume);

  return 0;


}