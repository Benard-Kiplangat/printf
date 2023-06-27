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
	int i = 0, j = 0, k = 10;
	char *string = va_arg(ap, char *);
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (string == NULL)
	{
		char *nul = "(avyy)";

		write(1, nul, 6);
		return (8);
	}

	for (i = 0; string[i] != '\0'; i++)
	{
		k = 10;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (string[i] == s[j])
			{
				k = 11;
				_putchar(r[j]);
				break;
			}
		}
		if (k == 10)
			_putchar(string[i]);
	}
	return (i);
}
