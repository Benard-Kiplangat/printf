#include "main.h"

/**
 * print_rot13 - a function that prints characters
 *
 * @ap: the pointer to the characters to print
 *
 * Return: the number of character printed or -1
 */

int print_rot13(va_list ap)
{
	int i, j;
	char *string = va_arg(ap, char *);
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (string == NULL)
	{
		char *nul = "(null)";

		write(1, nul, 6);
		return (8);
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		while (string[i] != s[j] && s[j] != '\0')
			j++;
		if (s[j] != '\0')
			string[i] = r[j];
	}
	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
	return (i);
}
