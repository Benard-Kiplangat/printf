#include "main.h"

/**
 * print_octal - a function that converts and prints octal numbers
 *
 * @ap: the integer to convert to hex
 *
 * Return: the number of digits printed
 */

int print_octal(va_list ap)
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
		bi_num[i] = b % 8;
		b = b / 8;
	}
	j = i - 1; /* subtracted 1 for the last digit */

	while (j >= 0)
	{
		/* printing in reverse the characters */
		_putchar(bi_num[j] + '0');
		j--;
		k++;
	}

	return (k);
}
