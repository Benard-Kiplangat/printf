#include "main.h"
/**
 * print_uint - a function that converts unsigned ints to string and prints
 * @ap: the integer to print
 * Return: the number of characters printed
 */
int print_uint(va_list ap)
{
	unsigned int a = va_arg(ap, unsigned int);
	int i = 0, k = 0, j = 0;
	char rev_num[64];

	if (a == '\0')
	{
		_putchar('0');
		k++;
		return (k);
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
