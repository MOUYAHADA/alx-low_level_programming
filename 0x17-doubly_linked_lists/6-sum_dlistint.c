#include "lists.h"

/**
 * sum_dlistint - calculate sum of linked list elements
 *
 * @head: head of the list
 *
 * Return: sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = NULL;

	if (!head)
		return (sum);
	current = head;

	while (current->prev)
		current = current->prev;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
