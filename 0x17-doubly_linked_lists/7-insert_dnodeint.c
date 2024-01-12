#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 *
 * @h: head
 * @idx: index
 * @n: number
 *
 * Return: pointer to new item
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new = NULL;
	unsigned int i = 0;

	if (!current)
		return (NULL);
	while (current->prev)
		current = current->prev;

	do {
		if (i == idx)
		{
			dlistint_t *tmp = current->prev;

			new = malloc(sizeof(dlistint_t));
			new->n = n;
			new->next = current;
			current->prev = new;
			new->prev = tmp;
			if (tmp)
				tmp->next = new;
			return (new);
		}
		current = current->next;
		i++;
	} while (current);

	return (NULL);
}
