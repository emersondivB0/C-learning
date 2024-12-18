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

### float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).

A floating point number can also be a scientific number with an "e" to indicate the power of 10.

### Why Should I Know the Size of Data Types?

Knowing the size of different data types is important because it says something about memory usage and performance.

For example, the size of a char type is 1 byte. Which means if you have an array of 1000 char values, it will occupy 1000 bytes (1 KB) of memory.

Using the right data type for the right purpose will save memory and improve the performance of your program.

You will learn more about the sizeof operator later in this tutorial, and how to use it in different scenarios.
