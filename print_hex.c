#include "main.h"

/**
 * hex_digit - a function that produces hex digits
 *
 * @v: the interger between 0 and 16 to change to hex
 *
 * Return: the hex digit
 */

char hex_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return (('a' + (v - 10)));
}

/**
 * print_hex - a function that prints hex in lowercase
 *
 * @ap: the integer to convert to hex
 *
 * Return: the number of digits printed
 */

int print_hex(va_list ap)
{
	unsigned int a = va_arg(ap, unsigned int);
	int i, k = 0;
	char bi_num[64]; /* assuming that the int is 64 bit */

	for (i = 0; a > 0; i++)
	{
		bi_num[i] = hex_digit((a % 16));
		a = a / 16;
	}

	while (i >= 0)
	{
		/* printing in reverse the characters */
		_putchar(bi_num[i]);
		i--;
		k++;
	}

	return (k);
}
