#include "lists.h"

/**
 * dlistint_len - return number of nodes in a linked list
 * @h: pointer to linked list head
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
