#include "../main.h"
#include <limits.h>

int main(void)
{
	int len = 0;
	int len2 = 0;
	int str = '\0';

	printf ("XXX: \n");
        
	len = _printf("%X\n", str);
	len2 = printf("%X\n", str);

        printf("len [%i]\nlen2 [%i]\n", len, len2);

	        printf ("xxx: \n");

        len = _printf("%x\n", str);
	len2 = printf("%x\n", str);

        printf("len [%i]\nlen2 [%i]\n", len, len2);

	        printf ("ooo: \n");

        len = _printf("%o\n", str);
	len2 = _printf("%o\n", str);

        printf("len [%i]\nlen2 [%i]\n", len, len2);
	return (0);
}
