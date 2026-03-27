#include <stdio.h>
#include <stdlib.h>

int main() {

  int day = 0;
  int month = 0;
  int dayOfYear = 0;


  printf("Please enter the day: ");
  scanf("%d", &day);

  printf("Please enter the month: ");
  scanf("%d", &month);


  switch (month) {

    case 1:
      dayOfYear = day;
      printf("January");
      break;

    case 2:
      dayOfYear = 31 + day;
      printf("February");
      break;

    case 3:
      dayOfYear = 31 + 28 + day;
      printf("March");
      break;

    case 4:
      dayOfYear = 31 + 28 + 31 + day;
      printf("April");
      break;

    case 5:
      dayOfYear = 31 + 28 + 31 + 30 + day;
      printf("May");
      break;

    case 6:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + day;
      printf("June");
      break;

    case 7:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + day;
      printf("July");
      break;

    case 8:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
      printf("August");
      break;

    case 9:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
      printf("September");
      break;

    case 10:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
      printf("October");
      break;

    case 11:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
      printf("November");
      break;

    case 12:
      dayOfYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
      printf("December");
      break;

  }


  printf(" the %dth is day %d of the year.\n", day, dayOfYear);


  return 0;
}