#include <stdio.h>

int main() {

  int amount = 0;
  int oneEuro = 0;
  int twoEuro = 0;
  int fiveEuro = 0;
  int tenEuro = 0;
  int twentyEuro = 0;
  int fiftyEuro = 0;
  int onehundretEuro = 0;

  printf("Please input the amount in Euros: ");
  scanf("%d", &amount);

  onehundretEuro = amount / 100;
  amount = amount % 100;  

  fiftyEuro = amount / 50;
  amount = amount % 50;  

  twentyEuro = amount / 20;
  amount = amount % 20;  

  tenEuro = amount / 10;
  amount = amount % 10;  

  fiveEuro = amount / 5;
  amount = amount % 5;  

  twoEuro = amount / 2;
  amount = amount % 2;  

  oneEuro = amount;  

  printf("%d EUR will be changed to\n", amount);
  printf("%d x 100 Euro\n", onehundretEuro);
  printf("%d x 50 Euro\n", fiftyEuro);
  printf("%d x 20 Euro\n", twentyEuro);
  printf("%d x 10 Euro\n", tenEuro);
  printf("%d x 5 Euro\n", fiveEuro);
  printf("%d x 2 Euro\n", twoEuro);
  printf("%d x 1 Euro\n", oneEuro);

  return 0;
}
