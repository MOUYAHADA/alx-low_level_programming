#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		++count;
		h = h->next;
	}
	return (count);
}
