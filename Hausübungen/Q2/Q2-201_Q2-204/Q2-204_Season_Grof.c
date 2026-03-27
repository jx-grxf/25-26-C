#include <stdio.h>
#include <stdlib.h>

int main() {

  int day = 0;
  int month = 0;


  printf("Please enter the day: ");
  scanf("%d", &day);

  printf("Please enter the month: ");
  scanf("%d", &month);


  printf("On the %dth of month %d is ", day, month);


  switch (month) {

    case 12:
      if (day >= 21) {
        printf("winter");
      } else {
        printf("autumn");
      }
      break;

    case 1:
      printf("winter");
      break;

    case 2:
      printf("winter");
      break;

    case 3:
      if (day >= 21) {
        printf("spring");
      } else {
        printf("winter");
      }
      break;

    case 4:
      printf("spring");
      break;

    case 5:
      printf("spring");
      break;

    case 6:
      if (day >= 21) {
        printf("summer");
      } else {
        printf("spring");
      }
      break;

    case 7:
      printf("summer");
      break;

    case 8:
      printf("summer");
      break;

    case 9:
      if (day >= 23) {
        printf("autumn");
      } else {
        printf("summer");
      }
      break;

    case 10:
    case 11:
      printf("autumn");
      break;

  }


  printf(".\n");


  return 0;
}