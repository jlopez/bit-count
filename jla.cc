#include <stdio.h>

int main(int argc, char* argv[]) {
  unsigned int j;
  for (unsigned int i = 0; i < 0xFFFFFFFF; ++i) {
    j = ((i & 0xaaaaaaaa) >> 1) + (i & 0x55555555);
    j = ((j & 0xcccccccc) >> 2) + (j & 0x33333333);
    j = ((j & 0xf0f0f0f0) >> 4) + (j & 0x0f0f0f0f);
    j = ((j & 0xff00ff00) >> 8) + (j & 0x00ff00ff);
    j = ((j & 0xffff0000) >>16) + (j & 0x0000ffff);
#ifdef DEBUG
    printf("%08X - %d\n", i, j);
#endif
  }
  return 0;
}
