#include <stdio.h>

int main(void) {
  printf("Arrays: \n\n");

  int array1[] = {33, 45, 67, 32, 12, 3, 0};
  printf("First element: %d\n", array1[0]);
  array1[0] = 24;
  printf("First element after change it: %d\n", array1[0]);

  printf("Now through a loop\n");

  int i;
  int lenght = sizeof(array1) / sizeof(array1[0]);

  printf("{");
  for (i = 0; i < lenght; i++) {
    if (i != (lenght - 1)) {
      printf("%d, ", array1[i]);
    } else {
      printf("%d }\n", array1[i]);
    }
  }
}
