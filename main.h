#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct converter - defines a struct for conversion specifiers
 * and their functions
 *
 * @fmt: format specifier
 * @fmtfunc - corresponding function to handle the conversion
 */

/*
struct printers {
	char fmts;
	int (*f)(va_list);
};

struct printers print_funcs[] = {
	{'c', print_char}, {'s', print_chars}, {'%', print_percent},
	{'d', print_int}, {'i', print_int}, {'b', print_binary},
	{'u', print_int}, {'o', print_octal}, {'x', print_hex},
	{'X', print_HEX}, {'S', print_nonpr}, {'p', print_address},
	{'r', print_rev_str}, {'R', print_rot13}}
};
*/

int print_char(va_list ap);
int print_parser(const char *format, va_list ap);
int print_chars(va_list ap);
int print_int(va_list ap);
int print_percent(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_nonpr(va_list ap);
int print_address(va_list ap);
int print_rot13(va_list ap);
int print_binary(va_list ap);
int print_rev_str(va_list ap);
int _strlen(const char *string);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
