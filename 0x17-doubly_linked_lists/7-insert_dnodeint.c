#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index 
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: number to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t  *new_node, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	temp = *h;
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		if (temp)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
