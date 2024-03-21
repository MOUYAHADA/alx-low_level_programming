#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head of the list
 * @index: index
 *
 * Return: pointer to the node, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node;

	if (head == NULL)
		return (NULL);

	current_node = head;
	for (i = 0; i < index; i++)
	{
		if (current_node->next == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	return (current_node);
}
