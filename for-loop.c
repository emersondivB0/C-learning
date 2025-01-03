#include <stdio.h>

int main(void) {
  printf("For Loop: \n\n");
  printf("Multiplication table of 13:\n");
  int i;
  for (i = 1; i < 14; i++) {
    printf("%d x 13 = %d\n", i, i * 13);
  }
}
