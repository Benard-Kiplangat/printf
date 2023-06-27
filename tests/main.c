#include "../main.h"
#include <limits.h>

int main(void)
{
	int len = 0;
	int len2 = 0;
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	printf ("XXX: \n");
	
	len = _printf("X = %X\n", ui);
	len2 = printf("X = %X\n", ui);

	_printf("len [%i]\nlen2 [%i]\n", len, len2);
	printf("len [%i]\nlen2 [%i]\n", len, len2);

	printf ("xxx: \n");
        
	len = _printf("x = %x\n", ui);
        len2 = printf("x = %x\n", ui);

        _printf("len [%i]\nlen2 [%i]\n", len, len2);
        printf("len [%i]\nlen2 [%i]\n", len, len2);

	printf ("ooo: \n");
        len = _printf("o = %o\n", ui);
        len2 = printf("o = %o\n", ui);

        _printf("len [%i]\nlen2 [%i]\n", len, len2);
        printf("len [%i]\nlen2 [%i]\n", len, len2);

	printf ("bbb: \n");
        len = _printf("b = %b\n", ui);
        len2 = printf("b = %s\n", "10000000000000000000001111111111");

        _printf("len [%i]\nlen2 [%i]\n", len, len2);
        printf("len [%i]\nlen2 [%i]\n", len, len2);

	printf ("uuu: \n");
        len = _printf("ui = %u\n", ui);
        len2 = printf("ui = %u\n", ui);

        _printf("len [%i]\nlen2 [%i]\n", len, len2);
        printf("len [%i]\nlen2 [%i]\n", len, len2);
	return (0);
}
