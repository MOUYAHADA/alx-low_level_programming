#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to the head of the list
 * @idx: index
 * @n: value to insert
 * Return: the address of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int current_idx = 0;

	if ((head == NULL && idx != 0) || !new)
		return (NULL);


	while (current->next != NULL)
	{
		if (idx - 1 == current_idx)
			break;
		current = current->next;
		current_idx++;
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		current = new;
		return (current);
	}
	if (idx - 1 == current_idx)
	{
		new->next = current->next;
		current->next = new;
		return (current);
	}
	free(new);
	return (NULL);
}
