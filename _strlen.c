#include "main.h"

/**
 * _strlen - a function that returns the number of chars in a string
 *
 * @string: the string to print
 *
 * Return: the lenght of the string
 */

int _strlen(const char *string)
{
	int len = 0;

	printf("%i\n", len);

	if (!string)
		return (-1);
	for (len = 0; string[len] != '\0'; len++)
		printf("%d,%c\n", len, string[len]);
	return (len);
}
