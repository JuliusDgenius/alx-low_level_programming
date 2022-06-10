#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - adds a node to a doubly linked list head
 * @head: doubly linked list head
 * @n: integer element to add to dlinked list
 *
 * Return: number of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
