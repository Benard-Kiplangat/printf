#include "main.h"

/**
 * print_rev - a function that reverses and prints a string
 *
 * @ap: the string to reverse
 *
 * Return:  return pointer to the reversed string
 */

int print_rev(va_list ap)
{
	char *string = va_arg(ap, char *);
	int i;
	int lenn = _strlen(string);
/*count string chars excluding nullbyte */

	i = lenn;
	if (string == NULL)
	{
		char *nul = "(null)";

		for (i = 0; i <= 6; i++)
			_putchar(nul[lenn]);
		return (i);
	}
	for (; lenn >= 0; lenn--)
		_putchar(string[lenn]);
	return (i);
}
