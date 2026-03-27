#include <stdio.h>
#include <stdlib.h>

int main() {

   

int n = 12;
int counter = 0;

while ((n % 3) + (n % 5) != 0) {

    counter += 1;
  printf("n: %d\n", n);
  printf("%d counter", counter);
  printf("n is %d", n);
  n++;
}

printf("n is %d", n);

return 0;




}