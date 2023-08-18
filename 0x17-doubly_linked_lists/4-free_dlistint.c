#include "lists.h"

/**
 * free_dlistint - Frees memory used by a dlistint_t list
 * @head: The pointer to the head node
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
if (head != NULL)
{
free_dlistint(head->next);
free(head);
}
}
