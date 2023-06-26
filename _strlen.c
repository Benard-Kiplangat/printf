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
	int len;

	if (string == NULL)
		return (0);
	for (len = 0; string[len] != '\0'; len++)
		;
	return (len);
}
