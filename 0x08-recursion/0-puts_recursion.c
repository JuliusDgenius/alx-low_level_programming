#include "main.h"

void _puts_recursive(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	printf("%c", *string);
	_puts_recursion(string + 1);
}
