#include "main.h"

/**
 * print_str - a function that prints a character
 *
 * @c: the char to print
 *
 * Return: the number of character printed or -1
 */

int print_chars(va_list ap)
{
	char *string = va_arg(ap, char *);
	unsigned int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
