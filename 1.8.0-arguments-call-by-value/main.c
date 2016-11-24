#include <stdio.h>

/*
1.8 - Arguments - Call by Value

Functions pass by value in C, not by reference.
You will have to pass an address of a variable (a pointer) to pass by reference.
*/

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n) {
  int p;
  for (p = 1; n > 0; --n)
    p = p * base;
  return p;
}

int main() {
  int i;

  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return(0);
}
