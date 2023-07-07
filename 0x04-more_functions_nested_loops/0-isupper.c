#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 * @c: is the int to check
 * Return: 0 if not uppercase and  if upper.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
