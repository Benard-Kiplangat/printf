#include <stdio.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int len = 0;
	int len2 = 0;
	
	len = _printf("A %s sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	
	len = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	len2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("Percentage: %%\n");
	len2 = printf("Percentage: %%\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %c, %s\n", NULL, NULL);
	len2 = printf("NULL: %c, %s\n", NULL, NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%");
	len2 = printf("%");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple sentence%");
	len2 = printf("\nA simple sentence%");
	printf("\nLen:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);	
	
	len = _printf("Number: %d, %i\n", 4034, 4034);
	len2 = printf("Number: %d, %i\n", 4034, 4034);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	
	len = _printf("Negative: %i, %d\n", -4034, -4034);
	len2 = printf("Negative: %i, %d\n", -4034, -4034);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("long: %i, %d\n", 4545439394949595, 4545439394949595);
	len2 = printf("long: %i, %d\n", 4545439394949595, 4545439394949595);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("long: %i, %d\n", -4545439394949595, -4545439394949595);
	len2 = printf("long: %i, %d\n", -4545439394949595, -4545439394949595);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("NULL: %i\n", NULL);
	len2 = printf("NULL: %i\n", NULL);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%d\n", INT_MAX);
	len2 = printf("%d\n", INT_MAX);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	return (0);
}
