#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers.
 * @array: A pointer to an array of integers to sort.
 * @size: Size of the array.
 * @value: The value to search.
 *
 * Return: returns the index where the value is found.
 */
int binary_search(int *array, size_t size, int value)
{
size_t l, r, mid, i;

i = 0;
l = 0;
r = (size - 1);

while (l <= r)
{
mid = (l + r) / 2;

printf("Searching in array: ");
for (i = l; i <= r; i++)
printf("%i%s", array[i], i == r ? "\n" : ", ");

if (value > array[mid])
{
l = mid + 1;
}
else if (value < array[mid])
{
r = mid - 1;
}
else
{
return (mid);
}
}
return (-1);
}
