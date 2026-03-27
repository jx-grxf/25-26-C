#include <stdio.h>

int main() {

  int a = 0;
  int b = 0;
  int c = 0;

  printf("Length side a: ");
  scanf("%d", &a);

  printf("Length side b: ");
  scanf("%d", &b);

  printf("Length side c: ");
  scanf("%d", &c);

  

 
  if (a > c) {
    int temp = a;
    a = c;
    c = temp;
  }

  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }

  printf("Entered sides: %d,%d,%d\n", a, b, c);

  
  if (a + b <= c) {
    printf("no triangle\n");
    return 0;
  }

  
  if (a == b && b == c) {
    printf("equilateral triangle\n");
    return 0;
  }

  
  if (a == b && b != c) {
    printf("isosceles triangle\n");
    return 0;
  }

  
  if (a*a + b*b == c*c) {
    printf("right triangle\n");
    return 0;
  }

  
  printf("general triangle\n");

  return 0;
}
