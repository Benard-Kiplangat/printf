#include "main.h"

/**
 * _putchar - a funcion that writes a character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (write(1, &c, 1));
}
