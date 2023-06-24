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
int i = 0;
int count = 0;

while (format[i] != '\0')
{
	/* if the next character is a conversion specifier */
	if (format[i] == '%')
	{
		char *argstr = va_arg(ap, char *);
		/* find out the specifier and call the right function */
		if (format[i + 1] == 's')
		{
			count = count + print_chars(argstr);
		i = i + 2; /* update the counter to match the excaped character */
		}

	/* if the next char is not in the list of specifiers,
	 * then it's a flag, so we'll handle it here */
	}
	_putchar(format[i]);
	i++;
}
printf("Thstrhn");
return (count);
}
