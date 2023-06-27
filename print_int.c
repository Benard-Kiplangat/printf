#include "main.h"
/**
 * print_int - a function that converts ints to strings and prints them
 * @ap: the integer to print
 * Return: the number of characters printed
 */
int print_int(va_list ap)
{
	int a = va_arg(ap, int);
	int i = 0, k = 0, j = 0;
	char rev_num[64];

	if (a == '\0')
	{
		_putchar('0');
		k++;
		return (k);
	}
	if (a < 0)
	{
		if (a < INT_MIN + 1)
		{
			rev_num[0] = (-(a + 1) % 10) + '0' + 1;
			a = -(INT_MIN + 1) / 10;
			i++;
		}
		else
			a = -a;
		_putchar('-');
		k++;
	}
/* as long as the number is > 10 there are multiple digits */
	for (; (a / 10) > 0; i++)
	{
		rev_num[i] = '0' + (a % 10);
		a = a / 10; /* truncating the last digit */
	}
	rev_num[i] = '0' + (a % 10);
/* printing the digits of the int */
	for (j = 0; i >= j; i--)
	{
		_putchar(rev_num[i]);
		k++;
	}
	return (k);
}
