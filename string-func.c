#include <stdio.h>
#include <string.h>

int main(void) {
  printf("String Length: \n");
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%lu\n\n", strlen(alphabet));

  printf("Now using sizeof: \n");
  printf("%lu\n\n", sizeof(alphabet));

  printf("Concatenare Strings: \n");
  char str1[20] = "Hello ";
  char str2[] = "World!";
  char str3[20];

  strcat(str1, str2);
  printf("%s\n\n", str1);

  printf("Copyt String: \n");
  strcpy(str3, str1);
  printf("%s\n\n", str3);

  printf("Compare Strings: \n");
  printf("%d\n", strcmp(str1, str3));
  printf("%d\n\n", strcmp(str1, str2));
}
