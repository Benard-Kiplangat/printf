#include "stdint.h"
#include "main.h"

/**
 * print_address - a funtion that prints pointer address
 * we included the stdint library to provide an intergral pointer capable of
 * holding a pointer.
 *
 * @ap: the pointer address to print
 *
 * Return: the number of chars printed
 */

int print_address(va_list ap)
{
	void *p = va_arg(ap, void *);
	uintptr_t addr;
	int i, j = 0;

	if (p != NULL)
	{
		addr = (uintptr_t)p;
		_putchar('0');
		_putchar('x');

		j = 2;
	/* >> acts like / and & acts like % but works on all bases of 2) */
		i = (sizeof(addr) << 3) - 20;

		while (i >= 0)
		{
			_putchar(hex_digit((addr >> i) & 0xf));
			i = i - 4;
			j++;
		}
	}
	else
		return (-1);
	return (j);
}
