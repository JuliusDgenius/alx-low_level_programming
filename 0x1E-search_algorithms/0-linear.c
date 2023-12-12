#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers using linear \
 * search algorithm.
 *
 * @array: A pointer to the first element of the array.
 * @size: The size of the array
 * @value: The value to search for.
 *
 * Return: Prints the value and index.
 */
int linear_search(int *array, size_t size, int value)
{
int i;

if (array != NULL)
{
for (i = 0; (size_t)i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
}
return (-1);
}
