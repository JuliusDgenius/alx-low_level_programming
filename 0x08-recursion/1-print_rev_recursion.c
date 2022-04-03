#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: the string argument to be reversed.
 * Return: Return 0 on success.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar("%c", *s);
	_print_rev_recursion(s + 1);
}
