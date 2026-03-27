#include <stdio.h>

int main() {

  int x = 0;
  int y = 0;


  printf("Please enter the x-coordinate: ");
  scanf("%d", &x);

  printf("Please enter the y-coordinate: ");
  scanf("%d", &y);

  printf("The point %d/%d is ", x, y);



  if (x > 0 && y > 0) {
    printf("on the 1st quadrant.\n");
  }
  else if (x < 0 && y > 0) {
    printf("on the 2nd quadrant.\n");
  }
  else if (x < 0 && y < 0) {
    printf("on the 3rd quadrant.\n");
  }
  else if (x > 0 && y < 0) {
    printf("on the 4th quadrant.\n");
  }
  else {
    printf("not in a quadrant on an axyis.\n");
  }



  return 0;
}
