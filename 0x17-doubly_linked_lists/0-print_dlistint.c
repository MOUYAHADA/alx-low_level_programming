#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}

	return (len);
}
