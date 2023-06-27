#include "main.h"

/**
 * _printf - our own implementation of the printf function
 *
 * @format: the string with format specifiers
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int k = 0;
	va_list ap;

	/* check if format is null or contains only % */
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	/* Now that format is not null, continue to operate on it */
	va_start(ap, format);

	/* testing _putchar.c */
	k = k + print_parser(format, ap);

	va_end(ap);
	return (k);
}
