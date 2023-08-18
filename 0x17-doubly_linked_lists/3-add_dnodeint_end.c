#include "lists.h"

/**
 * add_dnodeint_end - funtion to add a new node at the end of list
 * @head: A pointer to the head node to store its address
 * @n:  Data to store in the new node
 *
 * Return: returns a pointer to the new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = NULL;
dlistint_t *node = NULL;

if (head != NULL)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node != NULL)
{
node = *head;
while ((node != NULL) && (node->next != NULL))
{
node = node->next;
}
new_node->n = n;
new_node->next = NULL;
new_node->prev = node;
if (node != NULL)
{
node->next = new_node;
}
if (*head == NULL)
{
*head = new_node;
}
}
}
return (new_node);
}
