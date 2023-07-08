#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to scratch
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_num;

	if (index > 64)
	{
		return (-1);
	}
	bit_num = (n >> 1) & 1;

	return (bit_num);
}
