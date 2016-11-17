#include <stdio.h>

/*
  copy intput to output; 1st version
  NOTE: The Unix convention is that Control-D is used to indicate end-of-file (EOF).
*/
int main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return(0);
}
