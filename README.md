# Printf Function
The printf function is a C standard library that formats and print data to the standard output. This repository is our own implementation of the printf function. This implementation will help us gain a deeper understanding of the C language in general, and how the printf function works. So, it is a great learning experience, as we solidify the main concepts of the C programming language.

## _Printf Function Prototype

The function of our printf function will declare our function's name: `our\_printf`, the return type: `int`, and the parameters: one or more arguments can be passed into the function through variable arguments.

```C
int _printf(const char *format, ...);
```

## Handling the variadic arguments

Inside the our printf function, we iterate over the format string and use the appropriate format specifiers (e.g., %d, %s, etc.) to determine the type and number of arguments to expect. You can further extend this implementation to handle different format specifiers and their corresponding arguments.

## Usage

To use the _printf function in your programm, include the main.h header of the _printf function in your C program:

```C
#include "main.h"

int main()
{
    _printf("Hello, %s! The answer is %d.\n", "John", 42);
    return 0;
}
```
### The _printf function surported spend specifiers

%c for printing chars
%s for printing strings
%S for printing strings with Non-printable in hex
%d for printing decimals
%i for printing integers
%u for printing unsigned int 
%X for printing hex in uppercase
%x for printing hex in lowercase
%b for printing binary
%o for printing octal
%r for printing reversed strings 
%R for printing ROT13'ed strings 
%p for printing memory addres
