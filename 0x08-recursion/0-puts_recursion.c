#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * Return: return 0 on success
 */
void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	printf("%c", *string);
	_puts_recursion(string + 1);
}
