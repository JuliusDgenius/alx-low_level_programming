#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string to print to stdout
 * Return: return 0 on success
 */
void _puts_recursion(char *s)
{
	if (* != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
