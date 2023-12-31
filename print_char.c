#include "main.h"

/**
 * print_char - a funcion that writes a character c to stdout
 *
 * @ap: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, unsigned int);

	if (c == '\0')
		return (-1);
	return (write(1, &c, 1));
}
