#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main() {

  char c = ' ';

  printf("===VOWEL OR CONSONANT===\n");


  printf("Please enter a charakter: ");
  scanf(" %c", &c);


  c = tolower((unsigned char)c);  

  if (c >= 'a' && c <= 'z') {

    printf("%c ist a letter and", c);

  } else {

    printf("%c is not a letter! Please enter a letter.\n", c);
    return 1;
  }


  switch (c) {

    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("%c is a vowel.\n", c);
      break;

    default: 
      printf(" %c is a consonant.\n",c);

  }

  

  return 0;
}