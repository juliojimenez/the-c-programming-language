#include <stdio.h>

main() {
  double nc;

  nc = 0;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%0.f\n", nc);
}