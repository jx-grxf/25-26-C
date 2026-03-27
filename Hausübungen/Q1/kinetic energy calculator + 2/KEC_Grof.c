#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define UPPER_VALUE 5.00
#define LOWER_VALUE 0.10
#define UPPER_VELOCITY 30.00
#define LOWER_VELOCITY 0.50

int main() {
    
  float mass = 0;
  double velocity = 0;
  double kineticEnergy = 0;

    
  srand(time(0));

    
  mass = LOWER_VALUE + ((float)rand() / RAND_MAX) * (UPPER_VALUE - LOWER_VALUE);
  velocity = LOWER_VELOCITY + ((double)rand() / RAND_MAX) * (UPPER_VELOCITY - LOWER_VELOCITY);

    
  kineticEnergy = 0.5 * mass * velocity * velocity;

    
  printf("Mass: %.2f kg\n", mass);
  printf("Velocity: %.2f m/s\n", velocity);
  printf("Kinetic energy: %.2f J\n", kineticEnergy);

  return 0;
}
