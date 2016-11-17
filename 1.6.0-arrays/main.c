#include <stdio.h>

/* count digits, white space, others */
int main(int arg, char *argv[]) {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      /*
      char '0' is represented by integer 48
      char '1' is represented by integer 49
      To convert numeric characters to integer equivalents, this deducts them by
      48.
      Example: When character input is '1' (49), '1' (49) minus '0' (48) equals 1
      */
      ++ndigit[c-'0'];
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
    } else {
      ++nother;    
    }
  }

  printf("digits =");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n\n", nwhite, nother);

  return(0);
}
