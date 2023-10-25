#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node at index given
 * @head: pointer to head of the linked list
 * @index: given index
 * Return: value of node at index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
