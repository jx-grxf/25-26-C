#include <stdio.h>
#include <stdlib.h>

int main() {

  int day = 0;
  int month = 0;
  int year = 0;

  int j = 0;   
  int h = 0;   
  int w = 0;   


  printf("Please enter the day: ");
  scanf("%d", &day);

  printf("Please enter the monrth: ");
  scanf("%d", &month);

  printf("Please enter the year: ");
  scanf("%d", &year);


  j = year % 100;
  h = year / 100;

  w = (day + ((month + 1) * 26 / 10) + j + j / 4 + h / 4 - 2 * h) % 7;

  if (w < 0) {
    w += 7;
  }

  printf("The %dth of ", day);

  switch (month) {
    case 1:  printf("January "); break;
    case 2:  printf("February "); break;
    case 3:  printf("March "); break; 
    case 4:  printf("April "); break;
    case 5:  printf("May "); break;
    case 6:  printf("June "); break;
    case 7:  printf("July "); break;
    case 8:  printf("August "); break;
    case 9:  printf("September "); break;
    case 10: printf("October "); break;
    case 11: printf("November "); break;
    case 12: printf("December "); break;
  }

  printf("is a ");

  switch (w) {
    case 1: printf("Sunday"); break;
    case 2: printf("Monday"); break;
    case 3: printf("Tuesday"); break;
    case 4: printf("Wednesday"); break;
    case 5: printf("Thursday"); break;
    case 6: printf("Friday"); break;
    case 0: printf("Saturday"); break;
  }

  printf(".\n");




  return 0;
}