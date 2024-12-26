#include <stdio.h>

int main() {
  int x = 3, y = 34;
  printf("Let's start with if statement: \n");
  printf("It is 3 > 34?\n");
  if (x > y) {
    printf("%d is greater than %d\n", x, y);
  } else if (x == y) {
    printf("%d is equal to %d", x, y);
  } else {
    printf("No, %d isn't greater than %d\n", x, y);
  }

  printf("Now lets check the Ternary Operator\n");
  int time = 20;
  (time < 18) ? printf("Good Day!\n\n") : printf("Good evening!\n\n");

  printf("Switch:\n");

  int day = 4;
  switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  }

  return 0;
}
