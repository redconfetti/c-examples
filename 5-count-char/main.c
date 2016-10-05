#include <stdio.h>

/*
  The normal Unix convention is that Control-D is used to indicate end-of-file (EOF).
*/
int main(int arg, char *argv[]) {
  long nc;
  nc = 0;
  while (getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
  return 0;
}
