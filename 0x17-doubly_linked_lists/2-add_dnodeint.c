#include "lists.h"

/**
 * add_dnodeint - funtion to add a new node at start of list
 * @head: A pointer to the head that store its address
 * @n: The element to store in the new node
 *
 * Return: returns a pointer to the new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node = NULL;

if (head != NULL)
{
node = malloc(sizeof(dlistint_t));
if (node != NULL)
{
node->n = n;
node->prev = NULL;
node->next = *head;
if (*head != NULL)
{
(*head)->prev = node;
}
*head = node;
}
}
return (node);
}
