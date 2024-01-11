#include "lists.h"

/**
 * dlistint_len - counts length of a doubly linked list
 * @h: head
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current = (dlistint_t *)h;
	unsigned int len = 0;

	if (!current)
		return (len);
	if (current->prev != NULL)
		while (current->prev)
			current = current->prev;

	while (current)
	{
		current = current->next;
		len++;
	}

	return (len);
}
