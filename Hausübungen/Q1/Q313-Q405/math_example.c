#include <stdio.h>
#include <math.h>

int main() {

  //Potenzieren
  float result = pow(2,4);
  printf("2 hoch 4 = %f", result);


  //Quadratwurzel
  float finput = 6.5;
  printf("Quadratwurzel von 25 = %f ,", sqrt(7));


  //PI
  int radius = 3;
  printf("Kreisumfang = %f",radius*2*M_PI);
  printf("Kreisflaeche = %f\n",pow(radius,2)*M_PI);
  

  return 0;
}
