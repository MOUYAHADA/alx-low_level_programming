#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index.
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
