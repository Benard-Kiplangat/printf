#include <stdio.h>
#include <stdio.h>
#include "../main.h"

int main(void)
{
	int len = 0;
	int len2 = 0;
	
	len = _printf("A %R sentence\n", "simple");
	len2 = printf("A %s sentence\n", "simple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	
	len = _printf("A %c%c%s %R sentence\n", 's', 'i', "mple", "vsizplr");
	len2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);

	len = _printf("A simple %v entence\n");
	len2 = printf("A simple %v entence\n");
	printf("Len:[%d]\n", len);
	printf("Len1:[%d]\n\n", len2);
	return (0);
}
