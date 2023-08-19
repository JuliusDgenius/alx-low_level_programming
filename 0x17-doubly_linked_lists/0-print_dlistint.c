#include "lists.h"

/**
 * print_dlistint - Function to print all element od dlistint_t list
 * @h: A pointer to the head of the list or first node
 *
 *Return: Returns the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *node = NULL;
size_t counter = 0;

if (h != NULL)
{
node = h;
while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
counter++;
}
}
return (counter);
}
