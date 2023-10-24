#include "lists.h"

/**
 * listint_len - checks the number of elements in a linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	listint_t *current = (listint_t *)h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
