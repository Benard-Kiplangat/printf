#include "main.h"

/**
 * print_binary - a function that convert ints to binary
 * and then prints them
 *
 * @a: the integer to convert and print
 *
 * Return: number of digits printed
 */

int print_binary(const int a)
{
	int i, j;
	int bi_num[32]; /*assuming that the int is 32 bit */
	int b = a;

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
