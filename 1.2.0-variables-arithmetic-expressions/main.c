#include <stdio.h>

#define LOWER 0     // lower limit of table
#define UPPER 300   // upper limit
#define STEP 20     // step size

// Prints Fahrenheit-Celsius table
int main(int arg, char *argv[]) {
  float fahr, celsius;

  printf("\nFahrenheit\tCelsius\n");

  fahr = LOWER;
  while (fahr <= UPPER) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }

  printf("\n");
  return(0);
}
