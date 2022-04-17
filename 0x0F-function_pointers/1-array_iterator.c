#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each item of an array.
 * @array: array to execute function on.
 * @size: size of array.
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
