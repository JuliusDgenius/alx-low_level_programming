#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: first integer to swap.
 * @b: second to swap
 *
 * Return: the swapped values.
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
