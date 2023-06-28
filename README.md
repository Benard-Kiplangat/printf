# Printf Function
The printf function is a C standard library that formats and print data to the standard output. This repository is our own implementation of the printf function. This implementation will help us gain a deeper understanding of the C language in general, and how the printf function works. So, it is a great learning experience, as we solidify the main concepts of the C programming language.

## Our\_Printf Function Prototype
The function of our printf function will declare our function's name: `our\_printf`, the return type: `int`, and the parameters: one or more arguments can be passed into the function through variable arguments.

```C
int our_printf(const char *format, ...);
```

## Handling the variadic arguments
Inside the our printf function, we iterate over the format string and use the appropriate format specifiers (e.g., %d, %s, etc.) to determine the type and number of arguments to expect. You can further extend this implementation to handle different format specifiers and their corresponding arguments.

## Usage
To use our printf function, you can include the our printf header in your C program:


```C
#include "our_printf.h"

int main()
{
    our_printf("Hello, %s! The answer is %d.\n", "John", 42);
    return 0;
}
```
