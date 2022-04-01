#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @string: string to print to stdout
 * Return: return 0 on success
 */
void _puts_recursion(char *string)
{
	if (*string == '\0')
	{
		return;
	}
	_putchar("%i", *string);
	_puts_recursion(string + 1);
}
