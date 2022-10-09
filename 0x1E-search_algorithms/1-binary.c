#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @left: The left of the array.
 * @right: The right of the array.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = left; i < left + (right - left + 1); i++)
			printf("%d%s", *(array + i), i < left + (right - left) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search in.
 * @left: The left index of the array.
 * @right: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, left, right);
	m = left + ((right - left) / 2);
	if (left == right)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
		return (binary_search_index(array, left, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_index(array, m + 1, right, value));
}

/**
 * binary_search - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
