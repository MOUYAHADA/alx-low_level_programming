#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index
 *
 * @head: list head
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);
	while (current->prev)
		current = current->prev;
	while (current)
	{
		if (i == index)
		{
			dlistint_t *prev = current->prev;
			dlistint_t *next = current->next;

			free(current);
			prev->next = next;
			next->prev = prev;
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
