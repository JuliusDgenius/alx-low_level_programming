#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list
 * @n: the integer for the new node
 *
 * Return: NULL if function falis. Otherwise - the address of the newelement
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = (listint_t *)malloc(sizeof(listint_t));

new->n = n;
new->next = *head;
*head = new;

return (new);
}
