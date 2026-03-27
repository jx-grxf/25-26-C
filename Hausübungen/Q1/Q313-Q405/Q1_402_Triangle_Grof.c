#include <stdio.h>
#include <math.h>

int main() {

  double a = 0;
  double b = 0;
  double hypotenuse = 0;
  double perimeter = 0;
  double area = 0;

  printf("Lenght of side a: ");
  scanf("%lf", &a);

  printf("Lenght of side b: ");
  scanf("%lf", &b);

  hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
  perimeter = a + b + hypotenuse;
  area = 0.5 * a * b;

  printf("Hypotenuse = %.1lf\n", hypotenuse);
  printf("Perimeter = %.1lf\n", perimeter);
  printf("Area = %.1lf\n", area);


  return 0;
}