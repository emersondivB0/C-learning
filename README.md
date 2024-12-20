# Learning C

## Variables

A variable in C must be a specified data type, and you must use a format specifier inside the `printf()` function to display it.

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (\_)
- Names are case-sensitive (myVar and myvar are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as int) cannot be used as names

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

We use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.

### float vs double

The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).

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
