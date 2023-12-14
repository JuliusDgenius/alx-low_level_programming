#include "search_algos.h"
/**
 * interpolation_search - searches a value in a sorted array of
 * integers using interpolation searach
 * @array: The array of integers
 * @size: size of the array
 * @value: Value to search for
 *
 * Return: first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t start = 0;
size_t end = size - 1;
size_t mid;

if (!array)
return (-1);

while ((array[end] != array[start]) && (value >= array[start])
&& (value <= array[end]))
{
mid = start + (((double)(end - start) / (array[end] - array[start]))
* (value - array[start]));
printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
if (array[mid] < value)
start = mid + 1;
else if (value < array[mid])
start = mid - 1;
else
return (mid);
}
if (value == array[start])
{
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
return (start);
}
mid = start + (((double)(end - start) / (array[end] - array[start]))
* (value - array[start]));
printf("Value checked array[%lu] is out of ranges\n", mid);
return (-1);
}
