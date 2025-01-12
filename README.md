![alt text](https://www.startpage.com/av/proxy-image?piurl=https%3A%2F%2Fstatic.skillshare.com%2Fuploads%2Fvideo%2Fthumbnails%2Fb9455fc40a4053509ef0a77b8ddb6a51%2Foriginal&sp=1734785419T5638b9cd2430be70bfdad72d9b5e4502affd2191ddee71ac51fbe782aa2094b8)

# Learning C

## Variables

A variable in C must be a specified data type, and you must use a format specifier
inside the `printf()` function to display it.

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (\_)
- Names are case-sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as `int`) cannot be used as names

## Data Types

| Data Type | Size         | Description                                                                                           | Example |
| --------- | ------------ | ----------------------------------------------------------------------------------------------------- | :-----: |
| int       | 2 or 4 bytes | Stores whole numbers, without decimals                                                                |    1    |
| float     | 4 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |  1.99   |
| double    | 8 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits  |  1.99   |
| char      | 1 byte       | Stores a single character/letter/number, or ASCII values                                              |   'A'   |

### Format Specifiers

| Format Specifier | Data Type |
| ---------------- | --------- |
| %d or %i         | int       |
| %f or %F         | float     |
| %lf              | double    |
| %c               | char      |
| %s               | strings   |
| %lu              | sizeOf    |

We use the `%lu` format specifer to print the result, instead of `%d`. It is because the compiler expects the sizeof operator to return a long unsigned int (`%lu`), instead of int (`%d`). On some computers it might work with `%d`, but it is safer to use `%lu`.

### float vs double

The precision of a floating point value indicates how many digits the value
can have after the decimal point. The precision of float is six or seven decimal
digits, while double variables have a precision of about 15 digits. Therefore,
it is often safer to use double for most calculations - but note that it takes
up twice as much memory as float (8 bytes vs. 4 bytes).

A floating point number can also be a scientific number with an "e" to indicate the power of 10.

### Why Should I Know the Size of Data Types?

Knowing the size of different data types is important because it says something about memory usage and performance.

For example, the size of a char type is 1 byte. Which means if you have an array of 1000 char values, it will occupy 1000 bytes (1 KB) of memory.

Using the right data type for the right purpose will save memory and improve the performance of your program.

### Type Conversion

There are two types of conversion in C:

- Implicit Conversion (automatically)
- Explicit Conversion (manually)

#### Implicit Conversion

Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

For example, if you assign an `int` value to a `float` type.

#### Explicit Conversion

Explicit conversion is done manually by placing the type in parentheses () in front of the value.
You can also place the type in front of a variable.

Example:

```c
// Manual Conversion int to float
float sum = (float) 5 / 2;
printf("%f", sum); // 2.500000
```

## Constants

If you don't want others (or yourself) to change existing variable values, you can use the `const` keyword.

This will declare the variable as "constant", which means unchangeable and read-only
You should always declare the variable as constant when you have values that are unlikely to change.

Another thing about constant variables, is that it is considered good practice to declare them with uppercase.

```c
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
```

## Operators

C divides the operators into the following groups:

- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

### Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations.

| Operator | Name           | Description                            | Example |
| -------- | -------------- | -------------------------------------- | ------- |
| +        | Addition       | Adds together two values               | x + y   |
| -        | Substraction   | Subtracts one value from another       | x - y   |
| \*       | Multiplication | Multiplies two values                  | x \* y  |
| /        | Division       | Divides one value by another           | x / y   |
| %        | Modulus        | Returns the division remainder         | x % y   |
| ++       | Increment      | Increases the value of a variable by 1 | ++x     |
| --       | Decrement      | Decreases the value of a variable by 1 | --x     |

### Assignment Operators

Assignment operators are used to assign values to variables.

| Operator | Example | Same As    |
| -------- | ------- | ---------- |
| =        | x = 5   | x = 5      |
| +=       | x += 3  | x = x + 3  |
| -=       | x -= 3  | x = x - 3  |
| \*=      | x\*= 3  | x = x \* 3 |
| /=       | x /= 3  | x = x / 3  |
| %=       | x %= 3  | x = x % 3  |
| &=       | x &= 3  | x = x & 3  |
| \|=      | x \|= 3 | x = x \| 3 |
| ^=       | x ^= 3  | x = x ^ 3  |
| >>=      | x >>= 3 | x = x >> 3 |
| <<=      | x <<= 3 | x = x << 3 |

### Comparison Operators

Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.

The return value of a comparison is either 1 or 0, which means **true** (1) or **false** (0). These values are known as **Boolean values**.

| Operator | Name                     | Example | Description                                                                 |
| -------- | ------------------------ | ------- | --------------------------------------------------------------------------- |
| ==       | Equal to                 | x == y  | Returns 1 if the values are equal                                           |
| !=       | Not equal                | x != y  | Returns 1 if the values are not equal                                       |
| >        | Greater than             | x > y   | Returns 1 if the first value is greater than the second value               |
| <        | Less than                | x < y   | Returns 1 if the first value is less than the second value                  |
| >=       | Greater than or equal to | x >= y  | Returns 1 if the first value is greater than, or equal to, the second value |
| <=       | Less than or equal to    | x <= y  | Returns 1 if the first value is less than, or equal to, the second value    |

### Logical Operators

Logical operators are used to determine the logic between variables or values, by combining multiple conditions.

| Operator | Name | Example            | Description                                      |
| -------- | ---- | ------------------ | ------------------------------------------------ |
| &&       | AND  | x < 5 && x < 10    | Returns 1 if both statements are true            |
| \|\|     | OR   | x < 5 \|\| x < 4   | Returns 1 if one of the statements is true       |
| !        | NOT  | !(x < 5 && x < 10) | Reverse the result, returns 0 if the result is 1 |

## Booleans

Booleans represent values that are either **true** or **false**.

### Boolean Variables

In C, the `bool` type is not a built-in data type, like `int` or `char`.

It was introduced in C99, and you must import the following header file to use it:

```c
#include <stdbool.h>
```

A boolean variable is declared with the `bool` keyword and can take the values `true` or `false`:

```c
bool isProgrammingFun = true;
bool isDirtTasty = false;
```

Boolean values are returned as integers:

- 1 (or any other number that is not 0) represents true
- 0 represents false

Therefore, you must use the `%d` format specifier to print a boolean value.

## If ... Else

C supports the usual logical conditions from mathematics:

- Less than: a < b
- Less than or equal to: a <= b
- Greater than: a > b
- Greater than or equal to: a >= b
- Equal to a == b
- Not Equal to: a != b

C has the following conditional statements:

- Use `if` to specify a block of code to be executed, if a specified condition is `true`
- Use `else` to specify a block of code to be executed, if the same condition is `false`
- Use `else if` to specify a new condition to test, if the first condition is `false`
- Use `switch` to specify many alternative blocks of code to be executed

### The `if-else` Statement

Syntax:

```c
if (condition) {
  // Code
} else if (condition 2 {
  // Code
} else {
  // Code
}
```

### The short hand `if-else` (Ternary Operator)

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

```c
variable = (condition) ? expressionTrue : expressionFalse;
```

### Switch

Instead of writing many `if..else` statements, you can use the `switch` statement.

The `switch` statement selects one of many code blocks to be executed:

```c
switch (expression) {
  case x:
    // Code
    break;
  case y:
    // Code
    break;
  default:
    // Code
}
```

This is how it works:

- The `switch` expression is evaluated once
- The value of the expression is compared with the values of each `case`
- If there is a match, the associated block of code is executed
- The `break` statement breaks out of the switch block and stops the execution
- The `default` statement is optional, and specifies some code to run if there is no case match

## While Loop

The while loop loops through a block of code as long as a specified condition is true:

```c
while (condition) {
  // code block to be executed
}
```

### Do/While Loop

The `do/while` loop is a variant of the `while` loop. This loop will execute the code block once, before checking if the condition is true, the it will repeat the loop as long as the condition is true.

```c
do {
  // Code
}
while (condition);
```

## For Loop

When you know exactly how many times you want to loop through a block of code, use the `for` loop instead of a `while` loop:

```c
for (expression 1; expression 2; expression 3) {
  // Code
}
```

Expression 1 is executed (one time) before the execution of the code block.

Expression 2 defines the condition for executing the code block.

Expression 3 is executed (every time) after the code block has been executed.

### Break and Continue

The `break` statement can be used to jump out of a loop.

The `continue` statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

## Arrays

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type (like `int`) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type:

```c
int myNumbers[] = {25, 50, 75, 100};
```

### Set Array Size

```c
// Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
```

Using this method, you should know the number of array elements in advance, in order for the program to store enough memory.

You are not able to change the size of the array after creation.

It is important to note that all elements in an array **must be of the same data type**.

### Get Array Size or Length

To get the size of an array, you can use the `sizeof` operator:

```c
int myNumbers[] = {10, 25, 50, 75, 100};
printf("%lu", sizeof(myNumbers)); // Prints 20
```

The `sizeof` operator returns the size of a type in **bytes**.

An `int` type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

Knowing the memory size of an array is great when you are working with larger programs that require good memory management.

But when you just want to find out how many elements an array has, you can use the following formula (which divides the size of the array by the size of the first element in the array):

```c
int myNumbers[] = {10, 25, 50, 75, 100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

printf("%d", length);  // Prints 5
```

### Strings

The strings are an array of `char` elements, that means that have all the properties of de arrays.

```c
char greetings[] = "Hello World!";
printf("%s", greetings);
printf("%c", greetings[0]); --> H
```

#### Another way to create Strings

You can create a string with a set of characters. This example will produce the same result as the example in the beginning of this page:

```c
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);
```

> [!NOTE]
> Why do we include the `\0` character at the end? This is known as the "null terminating character",
> and must be included when creating strings using this method. It tells C that this is the end of the string.

The difference between the two ways of creating strings, is that the first method is easier to write, and you do not have to include the `\0` character, as C will do it for you.

You should note that the size of both arrays is the same: They both have 13 characters (space also counts as a character by the way), including the `\0` character.

### Special Characters

The backslash (\) escape character turns special characters into string characters or actions:

| Escape Character | Result   | Description  |
| ---------------- | -------- | ------------ |
| \'               | '        | Single quote |
| \"               | "        | Double quote |
| \\               | \        | Backslash    |
| \n               | New Line | New Line     |
| \t               | Tab      | Tab          |
| \0               | Null     | Null         |

### String Functions

To use them, you must include the `<string.h>` header file in your program.

To get the length of a string, you can use the `strlen()` function.

Note that `sizeof` and `strlen` behaves differently, as `sizeof` also includes the `\0` character when counting

It is also important that you know that `sizeof` will always return the memory size (in bytes), and not the actual string length:

```c
char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));   // 26
printf("%d", sizeof(alphabet));   // 50
```

#### Concatenate Strings

To concatenate (combine) two strings, you can use the `strcat()` function. The size of the first string (the base) should be enough to contain the second string.

#### Copy Strings

To copy the value of one string to another, you can use the `strcpy()` function. The size of the first string should be large enough to store the copied string.
