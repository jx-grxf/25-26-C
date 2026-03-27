#include <stdio.h>

int main() {

  int seconds = 0;
  int minutes = 0;
  int hours = 0;
  int sumSeconds = 0;

  printf("Please input the hours: ");
  scanf("%d", &hours);

  printf("Please input the minutes: ");
  scanf("%d", &minutes);

  printf("Please input the seconds: ");
  scanf("%d", &seconds);

  sumSeconds = (hours * 3600) + (minutes * 60) + seconds;

  printf("%d seconds have passed since midnight", sumSeconds);

  return 0;

  }


