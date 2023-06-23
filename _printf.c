#include "main.h"

/**
 * our_printf - our own implementation of the printf function
 *
 * @format: the string with format specifiers
 *
 * Return: the number of characters printed
 */

int our_printf(const char *format, ...)
{
	unsigned int printed_chars = 0;
	unsigned int i;
	va_list ap;

	/* check if format is null or contains only % */
	if (!format || (format[0] == '%' && format[1] != '\0'))
		return (-1);
	/* Now that format is not null, continue to operate on it */
	va_start(ap, format);

	/* testing _putchar.c */
	printed_chars = printed_chars + print_chars(format);
	print_chars(format);
	print_int(7316);

	va_end(ap);
	return (printed_chars);
}
