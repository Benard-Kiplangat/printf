#include "main.h"

/**
 * print_chars - a function that prints characters
 *
 * @ap: the pointer to the characters to print
 *
 * Return: the number of character printed or -1
 */

int print_chars(va_list ap)
{
	int i;
	char *string = va_arg(ap, char *);

	if (string == NULL)
		return (0);
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
