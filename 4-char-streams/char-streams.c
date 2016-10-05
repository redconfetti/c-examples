#include <stdio.h>

// copy intput to output; 1st version
int main(int arg, char *argv[]) {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
