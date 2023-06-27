#include "main.h"

/**
 * bin_printer - binary printer
 *
 * @a: integer to convert
 *
 * Return: always 0
 */

void bin_printer(unsigned int a)
{
	if (a > 1)
		bin_printer(a / 2);
	_putchar('0' + (a % 2));
}
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
	unsigned int a = va_arg(ap, unsigned int);
	int k = 0;
	unsigned int b = a;

	if (a == '\0')
	{
		_putchar('0');
		k++;
		return (k);
	}
	bin_printer(a);

	for (; b / 2; k++)
		b = b / 2;
	return (k + 1);
}
