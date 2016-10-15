#include <stdio.h>

/*
  The normal Unix convention is that Control-D is used to indicate end-of-file (EOF).
*/
int main(int arg, char *argv[]) {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
  return 0;
}
