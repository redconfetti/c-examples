#include <stdio.h>

// Prints Fahrenheit-Celsius table
int main(int arg, char *argv[]) {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("%3d %6.1f", fahr, (5.0/9.0)*(fahr-32));

  return(0);
}
