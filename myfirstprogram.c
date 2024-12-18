#include <stdio.h>

int main() {
  /*
    * I f I pu double \n it inserts a blank line 
  */ 
  printf("Hello World!\n");
  printf("Have a nice day!\n\n");
  printf("Time to start learning C!\n");

  /*
    * to output the value of an int variable, 
    * use the format specifier %d surrounded 
    * by double quotes (""), inside the printf() 
    * function
    */ 
  // Create variables
  int myNum = 15;            // Integer (whole number)
  float myFloatNum = 5.99;   // Floating point number
  char myLetter = 'D';       // Character

  //  Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  // Can combine text and variables:
  printf("My favorite number is %d\n", myNum);
  printf("I have this number %d and a letter %c, with a price %f\n", myNum, myLetter, myFloatNum);
  // You can also just print a value without storing it in a variable
  printf("I can put number without variables: %d, also chars : %c\n", 22, 'R');

  // You can declare multiple variables of the same type 
  int x = 2, y = 5, z = 9;
  printf("x + y + z = %d\n", x + y + z);
  return 0;
}
