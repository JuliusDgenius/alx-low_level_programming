#include "lists.h"

/**
 * sum_dlistint - funtion computes the sum of all the int data of a dlist.
 * @head: head pointer to node
 *
 * Return: The sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *node = head;

    while (node != NULL)
    {
        sum += node->n;
        node = node->next;
    }
    return (sum);
}
