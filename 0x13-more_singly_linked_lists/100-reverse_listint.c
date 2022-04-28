#include "lists.h"

/**
 * reverse_listint - reversees a listint_t linked ;ist
 * @head: double pointer to the start of the list
 *
 * Return: a pointer to the first list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;

if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}
