#include "main.h"
#include <stdio.h>

void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	printf("%c", *string);
	_puts_recursion(string + 1);
}
