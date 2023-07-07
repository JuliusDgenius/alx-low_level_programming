#include "main.h"

/**
 * _isdigit - checks if is a character or digit
 * @c: character or digit to check
 * Return: 0 if not digit and 1 if digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
