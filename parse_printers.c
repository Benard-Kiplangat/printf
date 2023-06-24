#include "main.h"

/**
 * print_parser - a function that determines which function to
 * use to print different parts of the format string
 *
 * @format - the format string
 * @list: list of the remaining arguments
 *
 * Return: number of characters printed
 */

int print_parser(const char *format, va_list ap)
{
int j, i = 0;
int count = 0;
struct printers {
       char fmts;
       int (*f)(va_list);
};

struct printers print_funcs[] = {
	{'c', print_char}, {'s', print_chars}, {'%', print_percent},
	{'d', print_int}, {'i', print_int}, {'b', print_binary},
	{'u', print_int}, /*{'o', print_octal}, {'x', print_hex},
	{'X', print_HEX}, {'S', print_nonpr}, {'p', print_address}, */
	{'r', print_rev_str}, /* {'R', print_rot13} */
};

while (format[i] != '\0')
{
	/* if the next character is a conversion specifier */
	if (format[i] == '%')
	{
		/* find out the specifier and call the right function */
		j = 0;
		while (j < 14 && format[i + 1] != print_funcs[j].fmts)
			j++;
		if (j < 14)
			count = count + print_funcs[j].f(ap);
		else /* handle flags */
			printf("Handle flags!");
		i = i + 2; /* update the counter to match the excaped character */
	}
	/* if the next char is not in the list of specifiers,
	 * then it's a flag, so we'll handle it here */
	_putchar(format[i]);
	i++;
}
return (count);
}
