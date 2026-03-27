#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {

  char charakter = ' ';


  printf("Please enter a charakter: ");
  scanf(" %c", &charakter);


  charakter = tolower((unsigned char)charakter);  

  i


  switch (charakter) {

    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("%c is a consonant.", charakter);
      break;

    


  }

  

  return 0;
}