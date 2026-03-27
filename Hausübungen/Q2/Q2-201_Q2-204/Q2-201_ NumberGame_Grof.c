#include <stdio.h>
#include <stdlib.h>

int main() {

  int inputNumber = 0;
  


  printf("Please enter a number: ");
  scanf("%d", &inputNumber);


  switch(inputNumber % 5) {

    case 0: inputNumber *= 2;
      break;

    case 2: inputNumber /= 2;
      break;

    case 3: inputNumber += 3;
      break;

    default: inputNumber -= 4; 
  }

  printf("New value: %d", inputNumber);

  return 0;
}