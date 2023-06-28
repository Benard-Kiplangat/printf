#include <stdio.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int len = 0;
	int len2 = 0;
	unsigned int nu = '\0';

	len = _printf("A %X,%x%o%u sentence\n", 0,0,0,0);
	len2 = printf("A %X,%x%o%u sentence\n", 0,0,0,0);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	
	len = _printf("A %X,%x%o%u sentence\n", nu, nu, nu, nu);
	len2 = printf("A %X,%x%o%u sentence\n", nu, nu, nu, nu);
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	len2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	return (0);
}
