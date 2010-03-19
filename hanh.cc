#include <stdio.h>

int main(int argc, char* argv[]) {
  unsigned int j, k;
  for (unsigned int i = 0; i < 0xFFFFFFFF; ++i) {
    for (k = i, j = 0; k; ++j)
      k = k & (k - 1);
#ifdef DEBUG
    printf("%08X - %d\n", i, j);
#endif
  }
  return 0;
}
