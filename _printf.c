#include "main.h"

/**
 * _printf - this function emulate the behaviour of
 * - the standard printf function
 *
 * @format: a pointer to a constant format string
 * - that specifies the output format
 *
 * Return: the number of characters printed
 */

typedef struct
{
	char specifier;
	int (*function)(va_list);
} formatSpecifier;

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

formatSpecifier specifiers[] = {
	{'d', print_int},
	/* Add %i specifier */
	{'i', print_int},
	{'b', print_binary},
	{'%', print_percent},
	{'s', print_chars},
	{'u', print_uint},
	{'o', print_octal},
	{'x', print_hexadecimal},
	{'X', print_hexadecimal_uppercase},
	{'c', print_char},
	{'p', print_address},
};
int show_chars = 0;

int x = 0;

int y = 0;

for (; format[x] != '\0'; x++)
{
	if (format[x] == '%')
	{
		char converter = format[x + 1];

		for (; y < sizeof(specifiers) / sizeof(specifiers[0]); y++)
		{
			if (specifiers[j].converter == converter)
			{
				show_chars += specifiers[y].function(args);
				break;
			}
		}
		x++;
	} else
	{
		_putchar(format[x]);
		show_chars++;
	}
}
va_end(args);
return (show_chars);
}
