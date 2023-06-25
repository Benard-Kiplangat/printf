#include "main.h"

/**
 * print_rev_str - a function that reverses and prints a string
 *
 * @ap: the string to reverse
 *
 * Return: pointer to the reversed string
 */

int print_rev_str(va_list ap)
{
	char *string = va_arg(ap, char *);
	int i;
	int lenn = _strlen(string);
/*count string chars excluding nullbyte */

	i = lenn;
	for (; lenn >= 0; lenn--)
		_putchar(string[lenn]);
	return (i);
}
