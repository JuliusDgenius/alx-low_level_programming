#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: Pointer to the address of the head of the listint_t list
 * @n: The integer for the new node to contain,
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;

new = (listint_t *)malloc(sizeof(listint_t));

new->n = n;
new->next = *head;
*head = new;

return (new);
}
