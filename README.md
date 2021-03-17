# _printf
_printf is a function that produces output according to a format.
## Prototype
```c
int _printf(const char *format, ...)
```
"format" is a string composed of zero or more directives, which can contain the following identifiers:

- **%i, %d -** Allows to print an integer that was written as input argument.
- **%c -** Allows to print a character that was written as input argument.
- **%s -**  Allows to print a string that was written as input argument.
## Return
In case of successful return, the function return the number of characters printed (excluding the null byte used to end output to strings). If there is an output error, the function return a negative value.
## Files
The following files are required for correct operation of this function:
- [_printf.c](https://github.com/vanemcb/printf/blob/main/_printf.c)
- [functions.c](https://github.com/vanemcb/printf/blob/main/functions.c)
- [holberton.h](https://github.com/vanemcb/printf/blob/main/holberton.h)
## Flowchart
## Manual
For more information about this function you can read the man page [man_3_printf](https://github.com/vanemcb/printf/blob/main/man_3_printf).
## Authors
Written by *Carlos Cruz*, *Juan Duque* and *Vanessa Mususué*.