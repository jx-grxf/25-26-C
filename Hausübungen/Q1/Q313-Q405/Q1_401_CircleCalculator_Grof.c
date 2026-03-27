#include <stdio.h>
#include <math.h>

int main() {

  float radius = 0.0;
  float Perimeter = 0.0;
  float Area = 0.0;

  printf("Please input the radius: ");
  scanf("%f", &radius);

  Perimeter = 2 * M_PI * radius;
  Area = M_PI * pow(radius, 2);

  printf("Perimeter = %.2f\n", Perimeter);
  printf("Area = %.2f", Area);

  return 0;






}