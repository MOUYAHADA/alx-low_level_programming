#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index
 *
 * @head: list head
 * @index: given index
 *
 * Return: node or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int idx = 0;

	if (!current)
		return (NULL);

	while (current->prev)
		current = current->prev;

	while (current)
	{
		if (index == idx)
			return (current);
		current =  current->next;
		idx++;
	}

	return (NULL);
}
