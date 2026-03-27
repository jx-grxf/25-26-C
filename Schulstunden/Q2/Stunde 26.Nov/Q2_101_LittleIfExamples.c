#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {

  //a
  int integerNumber = 0;
  int squareRoot = 0;

  printf("Please enter an integer: ");
  scanf("%d", &integerNumber);

  if (integerNumber >= 0) {

    squareRoot = sqrt(integerNumber);
    printf("The square root is %.2f\n");

  } else {

    printf("The square root of a negative number is not possible. \n");

  }

  //b
  float number1 = 0.0f;
  float number2 = 0.0f;
  float number3 = 0.0f;
  float sumNumbers = 0.0f;
  float productNumbers = 0.0f;

  number1 = (float)(rand() % 200 - 100) / 10.0f;
  number2 = (float)(rand() % 200 - 100) / 10.0f;
  number3 = (float)(rand() % 200 - 100) / 10.0f;

  printf("First random number: %.1f\n", number1);
  printf("Second random number: %.1f\n", number2);
  printf("Third random number %.1f\n", number3);

  sumNumbers = number1 + number2 + number3;
  productNumbers = number1 * number2 * number3;

  if (sumNumbers > productNumbers) {

    printf("The sum %.2f is bigger than the product %.2f .\n", sumNumbers, productNumbers);
    
  } else if (productNumbers > sumNumbers) {

    printf("The product %.2f is bigger than the sum %.2f . \n", productNumbers, sumNumbers);

  } else {

    printf("The product %.2f is the same as the sum %.2f .\n", productNumbers, sumNumbers);
  }


  //c
  int randomNumber = 0;







}