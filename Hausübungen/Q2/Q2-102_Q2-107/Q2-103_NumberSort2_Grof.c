#include <stdio.h>

int main() {

  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  printf("Please enter number 1: ");
  scanf("%d", &number1);

  printf("Please enter number 2: ");
  scanf("%d", &number2);
  
  printf("Please enter number 3: ");
  scanf("%d", &number3);

  printf("Entered numbers: %d,%d,%d\n", number1, number2, number3);

  
  if (number1 > number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
  }

  if (number1 > number3) {
    int temp = number1;
    number1 = number3;
    number3 = temp;
  }

  if (number2 > number3) {
    int temp = number2;
    number2 = number3;
    number3 = temp;
  }

  printf("Sorted numbers: %d,%d,%d\n", number1, number2, number3);

  return 0;
}
