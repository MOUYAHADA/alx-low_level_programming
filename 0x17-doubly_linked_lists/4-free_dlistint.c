#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *tmp = NULL;

	if (!current)
		return;
	while (current->prev)
		current = current->prev;
	while (current->next)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	free(current);
}
