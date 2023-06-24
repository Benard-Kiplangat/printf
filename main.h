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

struct converters
{
	char *cspec;
	int(*cspecfunc)(va_list);
};

typedef struct converters converter;

int print_parser(const char *format, va_list ap);
int print_chars(const char *string);
int print_int(const int a);
int print_binary(const int a);
int print_rev_str(const char *string);
int _strlen(const char *string);
int our_printf(const char *format, ...);
int _putchar(char c);
#endif
