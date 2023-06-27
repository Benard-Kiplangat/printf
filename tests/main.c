#include "../main.h"
#include <limits.h>

int main(void)
{
	int len = 0;
	int len2 = 0;
	char *str = "\n";

	printf ("S: \n");
        
	len = _printf("%S\n", str);

        printf("len [%i]\nlen2 [%i]\n", len, len2);
	return (0);
}
