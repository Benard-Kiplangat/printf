#include "main.h"
/**
 * print_parser - a function that determines which function to
 * use to print different parts of the format string
 * @format: the format string
 * @ap: list of the remaining arguments
 * Return: number of characters printed
 */
int print_parser(const char *format, va_list ap)
{
int j, i = 0, count = 0;

pr print_funcs[] = {
	{'c', print_char}, {'s', print_chars}, {'%', print_percent},
	{'d', print_int}, {'i', print_int}, {'b', print_binary},
	{'u', print_uint}, {'o', print_octal}, {'x', print_hex},
	{'X', print_HEX}, {'S', print_nonpr}, {'p', print_addr},
	{'r', print_rev}, {'R', print_rot13}
};
while (format[i] != '\0')
{/* if the next character is a conversion specifier */
	if (format[i] == '%')
	{/* find out the specifier and call the right function */
		if (format[i + 1] == '\0')
			return (-1);
		j = 0;
		while (j <= 14 && format[i + 1] != print_funcs[j].fmts)
			j++;
		if (j < 15)
			count = count + print_funcs[j].f(ap);
		else /* handle flags */
		{
			_putchar('%');
			_putchar(format[i + 1]);
			count += 2;
		}
		i = i + 2;
	}
	else
	{
		_putchar(format[i]);
		i++;
		count++;
	}}
return (count);
}
