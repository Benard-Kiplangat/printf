#include "main.h"

/**
 * print_uint - a function that converts unsigned ints to strings
 * and prints them
 *
 * @ap: the integer to print
 *
 * Return: the number of characters printed
 */

int print_uint(va_list ap)
{
	unsigned int a = va_arg(ap, unsigned int);
	int i, k = 0, j = 0;
	unsigned int b;
	int rev_num = 0;
	int lenn = 10;

	if (a == '\0')
		return (-1);
	b = a;
/* as long as the number is > 10 there are multiple digits */
	for (i = 0; (b / 10) > 0; i++)
	{
		b = b / 10; /* truncating the last digit */
	}
/* i is now the number of digits in the number */

/* finding the place value of each digit */
	while (j < i - 1)
	{
		lenn *= 10;
		j++;
	}

	for (j = 0; j <= i; j++)
	{
		rev_num = rev_num + ((a % 10) * lenn);
		lenn = lenn / 10;
		a = a / 10;
	}
/* printing the digits of the int */
	for (i = 0; i < j; i++)
	{
		_putchar(rev_num % 10 + '0');
		rev_num = rev_num / 10;
		k++;
	}
	return (k);
}
