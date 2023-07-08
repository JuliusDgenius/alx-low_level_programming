#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip to get
 * from one number to another
 * @num1: the number to be converted to num2
 * @num2: number to be converted to
 *
 * Return: number of bits needed to be flipped to get to another
 */
unsigned long int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int xORValue = num1 ^ num2;
	unsigned int counter = 0;

	while (xORValue > 0)
	{
		counter++;
		xORValue &= (xORValue - 1);
	}
	return (counter);
}
