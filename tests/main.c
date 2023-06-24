#include "../main.h"
#include <stdio.h>

int main(void)
{
	char *strng = "This is another test string";

	our_printf("This is a %% test %s %d %i string\n", strng, 14, 23);

	return (0);
}
