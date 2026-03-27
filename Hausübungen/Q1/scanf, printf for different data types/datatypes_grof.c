#include <stdio.h>

int main() {
  int intNumber1 = 0;
  int intNumber2 = 0;
  int intSum = 0;
  
  long longNumber1 = 0;
  long longNumber2 = 0;
  long longSum = 0;

  float floatNumber1 = 0;
  float floatNumber2 = 0;
  float floatSum = 0;

  double doubleNumber1 = 0;
  double doubleNumber2 = 0;
  double doubleSum = 0;

  char char1 = 0;
  char char2 = 0;
  char charSum = 0;

  printf("Please enter two integer numbers: ");
  scanf("%d %d",&intNumber1, &intNumber2);
  intSum = intNumber1 + intNumber2;
  printf("The sum of %d and %d is %d.\n\n", intNumber1, intNumber2, intSum);

  printf("Please enter two long numbers: ");
  scanf("%ld %ld",&longNumber1, &longNumber2);
  longSum = longNumber1 + longNumber2;
  printf("The sum of %ld and %ld is %ld.\n\n", longNumber1, longNumber2, longSum);

  printf("Please enter two float numbers: ");
  scanf("%f %f",&floatNumber1, &floatNumber2);
  floatSum = floatNumber1 + floatNumber2;
  printf("The sum of %.2f and %.2f is %.2f\n\n", floatNumber1, floatNumber2, floatSum);

  printf("Please enter two double numbers: ");
  scanf("%lf %lf",&doubleNumber1, &doubleNumber2);
  doubleSum = doubleNumber1 + doubleNumber2;
  printf("The sum of %.2lf and %.2lf is %.2lf\n\n", doubleNumber1, doubleNumber2, doubleSum);

  printf("Please enter two characters: ");
  scanf(" %c %c",&char1, &char2);
  charSum = char1 + char2;
  printf("The sum of %c and %c is %d\n", char1, char2, charSum);

  return 0;
}
