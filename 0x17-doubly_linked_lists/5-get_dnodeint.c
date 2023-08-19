#include "lists.h"

/**
 * get_dnodeint_at_index - will get the nth node of a dlistint_t list
 * @head: A head pointer to the first node
 * @index: The indexed position of the node to retrieve
 *
 * Return: returns pointer to the new node or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node = head;

while ((i != index) && (node != NULL))
{
node = node->next;
i++;
}
if (i == index)
{
return (node);
}
else
{
return (NULL);
}
}
