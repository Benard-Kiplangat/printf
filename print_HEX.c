#include "main.h"

/**
 * HEX_digit - a function that produces HEX digits
 *
 * @v: the interger between 0 and 16 to change to hex
 *
 * Return: the hex digit
 */

char HEX_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('A' + v - 10);
}

/**
 * print_HEX - a function that prints hex in uppercase
 *
 * @ap: the integer to convert to hex
 *
 * Return: the number of digits printed
 */

int print_HEX(va_list ap)
{
	unsigned int a = va_arg(ap, unsigned int);
	unsigned int b = a;
	int i, k = 0, j = 0;
	int bi_num[64]; /* assuming that the int is 64 bit */

	if (a == '\0')
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; b > 0; i++)
	{
		bi_num[i] = HEX_digit(b % 16);
		b = b / 16;
	}
	j = i - 1; /* subtracted 1 for the last digit */

	while (j >= 0)
	{
		/* printing in reverse the characters */
		_putchar(bi_num[j]);
		j--;
		k++;
	}

	return (k);
}
