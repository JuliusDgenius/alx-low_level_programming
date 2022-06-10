#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - find number of nodes in doubly linked list
 * @h: list
 *
 * Return: number of nodes present in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_nodes++;
	}

	return (num_nodes);


}
