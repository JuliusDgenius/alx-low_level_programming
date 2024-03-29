#include "lists.h"

/**
 * insert_dnodeint_at_index - will Inserts a new node at a given \
 * position in a dlist
 * @h: The head pointer to node to store its address
 * @idx: The index at which to add the new node
 * @n: The data to insert at the idx position od a new node
 *
 * Return: A pointer to the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node = NULL, *node = NULL;
unsigned int i = 0;

if (h != NULL)
{
node = *h;
while ((i != idx) && (node != NULL))
{
node = node->next;
i++;
}
if (i == idx)
{
if (node == NULL)
return (add_dnodeint_end(h, n));
new_node = malloc(sizeof(dlistint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = node, new_node->prev = NULL;
if (node->prev != NULL)
{
node->prev->next = new_node;
new_node->prev = node->prev;
}
node->prev = new_node;
if (i == 0)

*h = new_node;
}
}
}
return (new_node);
}
