#include "main.h"

/**
 * print_nonpr - a function that prints characters between
 * 0 and 127 in ascii tabler
 *
 * @ap: the char to print
 *
 * Return: the number of character printed or -1
 */

int print_nonpr(va_list ap)
{
	char *string = va_arg(ap, char *);
	unsigned int i, k = 0;

	if (string == NULL)
	{
		char *nul = "(null)";

		for (i = 0; nul[i] != '\0'; i++)
			_putchar(nul[i]);
		return (i);
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		if ((string[i] > 0 && string[i] < 32) || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (string[i] < 16)
			{
				_putchar('0');
				k++;
			}
			k = k + 2;
			k += print_HEXX(string[i]);
		}
		else
			_putchar(string[i]);
		k++;
	}
	return (k);
}

/**
 * print_HEXX - a function that prints hex in uppercase
 *
 * @b: the integer to convert to hex
 *
 * Return: the number of digits printed
 */

int print_HEXX(unsigned int b)
{
	int i, j = 0;
	char char_num[32]; /* assuming that the int is 32 bit */

	for (i = 0; b > 0; i++)
	{
		char_num[i] = HEX_digit(b % 16);
		b = b / 16;
	}
	j = i - 1; /* subtracted 1 for the last digit */

	while (j >= 0)
	{
		/* printing in reverse the characters */
		_putchar(char_num[j]);
		j--;
	}

	return (i - 1);
}
