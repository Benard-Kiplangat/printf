#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct printers - struct to store conversion specifiers and their functions
 * @fmts: conversion specifiers
 * @f: functions to handle the specifiers
 */

struct printers
{
	char fmts;
	int (*f)(va_list);
};

typedef struct printers pr;

int print_char(va_list ap);
int print_parser(const char *format, va_list ap);
int print_chars(va_list ap);
int print_int(va_list ap);
int print_uint(va_list ap);
int print_percent(va_list ap);
int print_octal(va_list ap);
char hex_digit(int v);
char HEX_digit(int v);
int print_hex(va_list ap);
int print_HEX(va_list ap);
int print_HEXX(unsigned int b);
int print_nonpr(va_list ap);
int print_addr(va_list ap);
int print_rot13(va_list ap);
int print_binary(va_list ap);
int print_rev(va_list ap);
int _strlen(const char *string);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
