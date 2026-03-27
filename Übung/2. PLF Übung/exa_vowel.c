#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    char letter = ' ';

    printf("Please enter your letter: ");
    scanf(" %c", &letter);

    

    letter = tolower((unsigned char)letter);

    switch (letter) {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n", letter);
            break;

        default: 
            printf("%c is a consonant\n", letter);
            break;
    }

    

    return 0;
}