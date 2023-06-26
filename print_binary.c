#include "main.h"

/**
 * print_binary - a function that convert ints to binary
 * and then prints them
 *
 * @ap: the integer to convert and print
 *
 * Return: number of digits printed
 */

int print_binary(va_list ap)
{
	int a = va_arg(ap, unsigned int);
	int i, j;
	int bi_num[64]; /*assuming that the int is 64 bit */
	int b = a;

	if (a == '\0')
		return (-1);
	for (i = 0; b > 0; i++)
	{
		bi_num[i] = b % 2;
		b = b / 2;
	}
	j = i - 1;

	while (j >= 0)
	{
		_putchar(bi_num[j] + '0');
		j--;
	}

	return (i);
}
