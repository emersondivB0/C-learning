#include <stdio.h>

int main(void) {
  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i++;
  }

  printf("DO/While Loop:\n");

  int j = 10;

  do {
    printf("%d\n", i);
    i--;
  } while (i > 0);
}
