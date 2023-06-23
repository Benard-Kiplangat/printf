#include "main.h"
#include "stdio.h"

/**
 * rev_string - a function that reverses a string
 *
 * @string: the string to reverse
 *
 * Return: pointer to the reversed string
 */

char *rev_string(const char *string)
{
	int i;
/*count string chars excluding nullbyte */
	int len = _strlen(string);
	char *reversed_str;

	for (i = 0; i <= len; i++)
	{
		printf("%d, %i, %c, %c\n", len, i, string[i], reversed_str[i]);
		reversed_str[i] = string[i];
	}
	reversed_str[i + 1] = '\0';
	return (reversed_str);
}
