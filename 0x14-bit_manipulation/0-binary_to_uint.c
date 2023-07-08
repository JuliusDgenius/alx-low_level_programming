#include "main.h"

/**
 * binary_to_uint - function converts binary number to unsigned integer
 * @b: pointer to string of binary number
 *
 * @Return: the function returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int total = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		total = 2 * total + (b[i] - '0');
	}
	return (total);
}
