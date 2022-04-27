#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node at agiven poisiton.
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if succeed, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *temp;

if (head == NULL || (*head) == NULL)

return (-1);

current = *head;
if (index == 0)
{
if ((*head)->next)
	(*head) = (*head)->next;
else
	(*head) = NULL;
free(current);
return (1);
}

while (index != 1)
{
if (current->next == NULL)
	return (-1);

current = current->next;
--index;
}
temp = current->next;
if (current->next->next)
	current->next = current->next->next;
else
current->next = NULL;
free(temp);

return (1);
}
