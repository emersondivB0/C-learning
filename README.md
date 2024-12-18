# Learning C

## Variables

A variable in C must be a specified data type, and you must use a format specifier inside the `printf()` function to display it.

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (\_)
- Names are case-sensitive (myVar and myvar are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as int) cannot be used as names

## Data Types

| Data   | Type         | Size                                                                                                  | Description | Example |
| ------ | ------------ | ----------------------------------------------------------------------------------------------------- | ----------- | ------- |
| int    | 2 or 4 bytes | Stores whole numbers, without decimals                                                                | 1           |
| float  | 4 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits | 1.99        |
| double | 8 bytes      | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits  | 1.99        |
| char   | 1 byte       | Stores a single character/letter/number, or ASCII values                                              | 'A'         |
