#include "search_algos.h"
#include <math.h>
/**
 * minimum - function that returns the minimum of two values passed
 * @first: first value
 * @second: second value
 *
 * Return: the smallest value between first and second.
 */
size_t minimum(size_t first, size_t second)
{
return (first <= second ? first : second);
}

/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for.
 *
 * Return: The index of the location where value is found
 */
int jump_search(int *array, size_t size, int value)
{
size_t start, end, jmp;

if (!array || size == 0)
return (-1);

jmp = sqrt(size);
for (end = 0; end < size && array[end] < value; start = end, end += jmp)
{
printf("Value checked array[%lu] = [%d]\n", end, array[end]);
}

/* Found message even if value not found in array */
printf("Value found between indexes [%lu] and [%lu]\n", start, end);

for (; start <= minimum(end, size - 1); start++)
{
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
if (array[start] == value)
return (start);
}
return (-1);
}
