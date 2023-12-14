#include "search_algos.h"
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
 * helper_binary_search - Helper function that searches value in an
 * integer array using binary search algorithm which does not
 * necessarilly return the lowest index for a value that occur twice
 * @array: The array
 * @value: The value to search for
 * @start: beiginning index
 * @end: last index
 *
 * Return: index where value is located
 */
int helper_binary_search(int *array, int value, size_t start, size_t end)
{
size_t mid, i;

if (!array)
return (-1);

while (start <= end)
{
mid = (start + end) / 2;
printf("Searching in array: ");
for (i = start; i <= end; i++)
printf("%i%s", array[i], i == end ? "\n" : ", ");
if (array[mid] < value)
start = mid + 1;
else if (array[mid] > value)
end = mid - 1;
else
return ((int)mid);                                                  }
return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of i ntegers using Exponential search algorithm
 * @array: The array to search in
 * @size: size of the array
 * @value: The value to search for
 *
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
size_t start, end, bound = 1;

if (!array || size == 0)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
start = bound / 2;
end = minimum(bound, size - 1);

printf("Value found between indexes [%lu] and [%lu]\n", start, end);
return (helper_binary_search(array, value, start, end));
}
