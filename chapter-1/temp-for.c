#define MIN 0
#define MAX 300
#define STEP 20
#include <stdio.h>

main() {
  int fahr;
  for (fahr = MIN; fahr <= MAX; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}