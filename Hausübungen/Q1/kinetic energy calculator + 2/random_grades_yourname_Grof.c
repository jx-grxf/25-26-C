#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_GRADES 6

int main() {

  char grade = 0;
  char next_grade = 0;

  srand(time(0));

  grade = 'A' + (rand() % NUM_GRADES);
  next_grade = grade + 1;

  printf("Grade: %c\n", grade);
  printf("ASCII(%c) = %d\n", grade, grade);
  printf("Next char: %c\n", next_grade);
  printf("ASCII(%c) = %d\n", next_grade, next_grade);

  return 0;
  
}
