#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @string: the string to reverse
 *
 * Return: pointer to the reversed string
 */

int print_rev_str(const char *string)
{
	int i;
	int lenn = _strlen(string);
/*count string chars excluding nullbyte */

	i = lenn;
	for (; lenn >= 0; lenn--)
		_putchar(string[lenn]);
	return (i);
}
