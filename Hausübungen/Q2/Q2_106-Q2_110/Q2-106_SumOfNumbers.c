#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPPER_VALUE 60
#define LOWER_VALUE -60

int main() {

  int number1 = 0;
  int number2 = 0;
  int number3 = 0;
  int number4 = 0;
  int number5 = 0;
  
  int sumPositive = 0;
  int sumNegative = 0;

  int smallestNumber = 0;
  int largestNumber = 0;

  srand(time(NULL));


  number1 = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;
  number2 = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;
  number3 = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;
  number4 = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;
  number5 = rand() % (UPPER_VALUE - LOWER_VALUE + 1) + LOWER_VALUE;


  if (number1 >= 0) {

    sumPositive += number1;
  } else {

    sumNegative += number1;
  }


  if (number2 >= 0) {

    sumPositive += number2;

  } else {

    sumNegative += number2;
  }


  if (number3 >= 0) {

    sumPositive += number3;

  } else {

    sumNegative += number3;
  }


  if (number4 >= 0) {

    sumPositive += number4;

  } else {

    sumNegative += number4;
  }


  if (number5 >= 0) {

    sumPositive += number5;

  } else {

    sumNegative += number5;
  }


  

  smallestNumber = number1;
  largestNumber = number1;

  if (number2 < smallestNumber) smallestNumber = number2;
  if (number2 > largestNumber) largestNumber = number2;

  if (number3 < smallestNumber) smallestNumber = number3;
  if (number3 > largestNumber) largestNumber = number3;

  if (number4 < smallestNumber) smallestNumber = number4;
  if (number4 > largestNumber) largestNumber = number4;

  if (number5 < smallestNumber) smallestNumber = number5;
  if (number5 > largestNumber) largestNumber = number5;



  printf("Sum of numbers\n");
  printf("---------------------------------------------\n");

  printf("%d/%d/%d/%d/%d\n", number1, number2, number3, number4, number5);
  printf("Sum of the positive numbers: %d\n", sumPositive);
  printf("Sum of the negative numbers: %d\n", sumNegative);
  printf("Largest number: %d\n", largestNumber);
  printf("Smallest number: %d \n", smallestNumber);

  printf("---------------------------------------------");


  return 0;

 

}