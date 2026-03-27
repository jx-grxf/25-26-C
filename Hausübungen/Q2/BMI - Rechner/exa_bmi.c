#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h> // für dIe konvertierung von dem Buchstaben

int main() {

  float groesse_cm = 0.0f;
  float groesse_meter = 0.0f;
  float gewicht = 0.0f;
  int alter = 0;
  char geschlecht = ' ';
  float bmi_wert = 0.0f;

   

  printf("===BMI RECHNER===\n");

  printf("Bitte geben sie ihre Groesse in CM ein: ");
  scanf("%f", &groesse_cm);

  printf("Bitte geben sie ihr Gewicht in kg ein: ");
  scanf("%f", &gewicht);

  printf("Bitte geben sie ihr Alter ein: ");
  scanf("%d", &alter);

  printf("Bitte geben sie ihr biologisches Geschlecht ein (m) für männlich und (w) für weiblich: ");
  scanf(" %c", &geschlecht);

  geschlecht = tolower((unsigned char)geschlecht);

  if (groesse_cm <= 0.0f || gewicht <= 0.0f || alter <= 0) {
    printf("\nBitte geben Sie nur Werte > 0 ein.\n");
    return 1;
  }

  if (geschlecht != 'm' && geschlecht != 'w') {
    printf("\nBitte geben sie für das Geschlecht nur (w für weiblich) oder (m für männlich ein)\n");
    return 1;
  }


  groesse_meter = groesse_cm / 100.0f; //In Meter umrechnen

  
  printf("\n=== IHRE EINGABEN === \n");
  printf("%.2f cm\n", groesse_cm);
  printf("%.2f kg\n", gewicht);
  printf("%d Jahre alt\n", alter);
  if (geschlecht == 'm') {
    printf("Sie sind maennlich!\n");
  } else printf("Sie sind weiblich!\n");


  bmi_wert = gewicht / pow(groesse_meter, 2);

  printf("\nDer errechnete BMI-Wert beträgt %.2f\n", bmi_wert);


  // Frauen 19-24 Jahre

  if (geschlecht == 'w') {
    
    if (alter >= 19 && alter <= 24) {

      if (bmi_wert <= 18) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 18 && bmi_wert <= 24) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 24 && bmi_wert <= 29) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 29 && bmi_wert <= 39) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 39) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Frauen 19-25 Jahre

  if (geschlecht == 'w') {
    
    if (alter >= 25 && alter <= 34) {

      if (bmi_wert <= 19) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 19 && bmi_wert <= 25) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 25 && bmi_wert <= 30) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 30 && bmi_wert <= 40) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 40) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Frauen 35-44 Jahre

   if (geschlecht == 'w') {
    
    if (alter >= 35 && alter <= 44) {

      if (bmi_wert <= 20) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 20 && bmi_wert <= 26) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 26 && bmi_wert <= 31) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 31 && bmi_wert <= 41) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 41) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Frauen 45 - 54 Jahre

   if (geschlecht == 'w') {
    
    if (alter >= 45 && alter <= 54) {

      if (bmi_wert <= 21) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 21 && bmi_wert <= 27) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 27 && bmi_wert <= 32) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 32 && bmi_wert <= 42) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 42) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Frauen 55 - 64 Jahre

  if (geschlecht == 'w') {
    
    if (alter >= 55 && alter <= 64) {

      if (bmi_wert <= 22) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 22 && bmi_wert <= 28) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 28 && bmi_wert <= 33) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 33 && bmi_wert <= 43) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 43) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Frauen > 64 Jahre

  if (geschlecht == 'w') {
    
    if (alter > 64) {

      if (bmi_wert <= 23) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 23 && bmi_wert <= 29) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 29 && bmi_wert <= 34) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 34 && bmi_wert <= 44) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 44) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }








  // Männer

  // Männer 19-24 Jahre

  if (geschlecht == 'm') {
    
    if (alter >= 19 && alter <= 24) {

      if (bmi_wert <= 19) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 19 && bmi_wert <= 25) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 25 && bmi_wert <= 30) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 30 && bmi_wert <= 40) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 40) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Männer 25-34 Jahre

  if (geschlecht == 'm') {
    
    if (alter >= 25 && alter <= 34) {

      if (bmi_wert <= 20) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 20 && bmi_wert <= 26) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 26 && bmi_wert <= 31) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 31 && bmi_wert <= 41) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 41) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Männer 35 - 44 Jahre

  if (geschlecht == 'm') {
    
    if (alter >= 35 && alter <= 44) {

      if (bmi_wert <= 21) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 21 && bmi_wert <= 27) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 27 && bmi_wert <= 32) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 32 && bmi_wert <= 42) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 42) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Männer 45 - 54 Jahre

  if (geschlecht == 'm') {
    
    if (alter >= 45 && alter <= 54) {

      if (bmi_wert <= 22) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 22 && bmi_wert <= 28) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 28 && bmi_wert <= 33) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 33 && bmi_wert <= 43) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 43) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Männer 55-64 Jahre

  if (geschlecht == 'm') {
    
    if (alter >= 55 && alter <= 64) {

      if (bmi_wert <= 23) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 23 && bmi_wert <= 29) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 29 && bmi_wert <= 34) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 34 && bmi_wert <= 44) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 44) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  // Männer > 64 Jahre

  if (geschlecht == 'm') {
    
    if (alter > 64) {

      if (bmi_wert <= 24) {
        printf("Dieser BMI-Wert fällt unter Untergewicht!\n");
      } else if (bmi_wert >= 24 && bmi_wert <= 30) {
        printf("Dieser BMI-Wert fällt unter Normalgewicht!\n");
      } else if (bmi_wert > 30 && bmi_wert <= 35) {
        printf("Dieser BMI-Wert fällt unter Übergewicht!\n");
      } else if (bmi_wert > 35 && bmi_wert <= 45) {
        printf("Dieser BMI-Wert fällt unter Adipositas!\n");
      } else if (bmi_wert > 45) {
        printf("Dieser BMI-Wert fällt unter starke Adipositas!\n");
      } else printf("Dein BMI-Wert fällt unter keine spezifische Kategorie!\n");

    }
  }

  return 0;
}