#include "main.h"

/**
 * print_int - a function that converts ints to strings
 * and prints them
 *
 * @int: the integer to print
 *
 * Return: the number of characters printed
 */

int print_int(va_list ap)
{
	int a = va_arg(ap, int);
	int i, j = 0;
	int b = a;
	int rev_num = 0;
	int lenn = 10;

/* as long as the number is > 10 there are multiple digits */
	for (i = 0; (b / 10) > 0; i++)
	{
		b = b / 10; /* truncating the last digit */
	}
/* i is now the number of digits in the number */
	b = a;

/* finding the place value of each digit */
	while (j < i - 1)
	{
		lenn *= 10;
		j++;
	}

/* reversinig the number because this function prints
 * numbers in reverse order
 */
	for (j = 0; j <= i; j++)
	{
		rev_num = rev_num + ((b % 10) * lenn);
		lenn = lenn / 10;
		b = b / 10;
	} 
/* printing the digits of the int */
	for (i = 0; i < j; i++)
	{
		_putchar(rev_num % 10 + '0');
		rev_num = rev_num / 10;
	}
	return (i);
}
