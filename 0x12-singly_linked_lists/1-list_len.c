#include "lists.h"

/**
 * list_len - counts the length of a list
 * @h: pointer to first element
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ptr = (list_t *)h;

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
