#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double streckenLaenge = 0.0;
    double treffpunktDistanz = 0.0;
    double treffpunktZeit = 0.0;




    int abfahrt1_h = 0, abfahrt1_m = 0;
    int ankunft1_h = 0, ankunft1_m = 0;

    int abfahrt2_h = 0, abfahrt2_m = 0;
    int ankunft2_h = 0, ankunft2_m = 0;

    double abfahrt1 = 0.0, ankunft1 = 0.0;
    double abfahrt2 = 0.0, ankunft2 = 0.0;

    double fahrzeit1 = 0.0, fahrzeit2 = 0.0;
    double geschw1 = 0.0, geschw2 = 0.0;



    

    printf("Bitte geben Sie die Strecke in km ein: ");
    scanf("%lf", &streckenLaenge);

    printf("Bitte geben Sie die 1. Abfahrtszeit ein (hh:mm): ");
    scanf("%d:%d", &abfahrt1_h, &abfahrt1_m);

    printf("Bitte geben Sie die 1. Ankunftszeit ein (hh:mm): ");
    scanf("%d:%d", &ankunft1_h, &ankunft1_m);

    printf("Bitte geben Sie die 2. Abfahrtszeit ein (hh:mm): ");
    scanf("%d:%d", &abfahrt2_h, &abfahrt2_m);

    printf("Bitte geben Sie die 2. Ankunftszeit ein (hh:mm): ");
    scanf("%d:%d", &ankunft2_h, &ankunft2_m);





    abfahrt1 = abfahrt1_h + abfahrt1_m / 60.0;
    ankunft1 = ankunft1_h + ankunft1_m / 60.0;
    abfahrt2 = abfahrt2_h + abfahrt2_m / 60.0;
    ankunft2 = ankunft2_h + ankunft2_m / 60.0;

    fahrzeit1 = ankunft1 - abfahrt1;
    fahrzeit2 = ankunft2 - abfahrt2;

    geschw1 = streckenLaenge / fahrzeit1;
    geschw2 = streckenLaenge / fahrzeit2;

    treffpunktZeit = (streckenLaenge - geschw2 * (abfahrt2 - abfahrt1)) / (geschw1 + geschw2);
    treffpunktDistanz = geschw1 * treffpunktZeit;






    printf("--- Ergebnisse ---\n");
    printf("Zeit bis zum Treffen: %lf Stunden\n", treffpunktZeit);
    printf("Distanz des Treffpunkts vom Start des 1. Zuges: %lf km\n", treffpunktDistanz);




    return 0;
}