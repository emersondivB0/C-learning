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
  int myNum = 15;          // Integer (whole number)
  float myFloatNum = 5.99; // Floating point number
  char myLetter = 'D';     // Character

  //  Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);

  // Can combine text and variables:
  printf("My favorite number is %d\n", myNum);
  printf("I have this number %d and a letter %c, with a price %f\n", myNum,
         myLetter, myFloatNum);
  // You can also just print a value without storing it in a variable
  printf("I can put number without variables: %d, also chars : %c\n", 22, 'R');

  // You can declare multiple variables of the same type
  int x = 2, y = 5, z = 9;
  printf("x + y + z = %d\n", x + y + z);

  // You can use ASCII values to display certain characters
  char a = 65, b = 66, c = 67;
  printf("%c\n%c\n%c\n", a, b, c);
  // If you try to store more than one character
  //  it will only print the last character.
  char myText = 'Hello';
  printf("Trying to print Hello: %c\n", myText);

  // To store multiple characters (or whole words), use
  // strings (which you will learn more about in a later chapter)
  char myOtherText[] = "Hello";
  printf("Now print a string: %s\n", myOtherText);

  // A floating point number can also be a scientific
  // number with an "e" to indicate the power of 10
  float f1 = 35e3;
  double d1 = 12E4;

  printf("%f\n", f1);
  printf("%lf\n", d1);

  /*
   * If you want to remove the extra zeros (set decimal precision),
   * you can use a dot (.) followed by a number that specifies
   * how many digits that should be shown after the decimal point
   */
  float myFloatNum1 = 3.5;

  printf("Imprime default: %f\n",
         myFloatNum1); // Default will show 6 digits after the decimal point
  printf("Imprime sólo 1 decimal: %.1f\n", myFloatNum1); // Only show 1 digit
  printf("Imprime 2 decimales: %.2f\n", myFloatNum1);    // Only show 2 digits
  printf("Imprime 4 decimales: %.4f\n", myFloatNum1);    // Only show 4 digits
  //
  //
  // Implicit Conversion
  double X = 5;
  int Y = 8.98;
  printf("Los valores deberían ser 5 y 8.98, no %lf y %d\n", X, Y);

  // Manual Conversion
  float cociente = 5 / 2;
  float cociente1 = (float)5 / 2;
  printf("The division between 5 and 2 without conversion: %.1f\n", cociente);
  printf("The division between 5 and 2 with conversion: %.1f\n", cociente1);
  return 0;
}
