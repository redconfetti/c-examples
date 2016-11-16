#include <stdio.h>


int main() {
  /*
  int i, c;
  int ndigit[10];

  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c-'0'];
    }
  }

  for (i = 0; i < 10; ++i)
    printf(" %d\n", ndigit[i]);

  printf(" %d\n", ndigit[i]);
  */

  /* Trying to understand the c-'0' expression */
  printf(" ---------\n");
  printf(" %d\n", '0');
  printf(" %d\n", '1');
  printf(" %d\n", '2');
  printf(" %d\n", '3');
  printf(" ---------\n");

  int c;
  for (c = 0; c < 10; ++c) {
    printf(" %d\n", c+'a');
  }

  return(0);
}
