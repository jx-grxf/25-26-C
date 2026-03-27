#include <stdio.h>
#include <math.h>

int main() {

  int numerator1 = 0;
  int numerator2 = 0;
  int denominator1 = 0;
  int denominator2 = 0;
  int sumAdditionNumerator = 0;
  int sumAdditionDenominator = 0;
  int sumSubtractionNumerator = 0;
  int sumSubtractionDenominator = 0;
  int multiplicationNumerator = 0;
  int multiplicationDenominator = 0;


  printf("Number 1 - numerator: ");
  scanf("%d",&numerator1);

  printf("Number 1 - denominator:");
  scanf("%d",&denominator1);

  printf("Number 2 - numerator:");
  scanf("%d",&numerator2);

  printf("Number 2 - denominator:");
  scanf("%d", &denominator2);

  sumAdditionNumerator = numerator1 * denominator2 + numerator2 * denominator1;
  sumAdditionDenominator = denominator1 * denominator2;


  sumSubtractionNumerator = numerator1 * denominator2 - numerator2 * denominator1;
  sumSubtractionDenominator = denominator1 * denominator2;

  multiplicationNumerator = numerator1 * numerator2;
  multiplicationDenominator = denominator1 * denominator2;

  printf("Addition: %d/%d + %d/%d = %d/%d\n", numerator1, denominator1, numerator2, denominator2, sumAdditionNumerator, sumAdditionDenominator);
  printf("Subtraction: %d/%d + %d/%d = %d/%d\n", numerator1, denominator1, numerator2, denominator2, sumSubtractionNumerator, sumSubtractionDenominator);
  printf("Multiplication: %d/%d + %d/%d = %d/%d\n", numerator1, denominator1, numerator2, denominator2, multiplicationNumerator, multiplicationDenominator);


 
  

  return 0; 

}