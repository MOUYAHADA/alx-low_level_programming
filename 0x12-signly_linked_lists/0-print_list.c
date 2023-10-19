#include "lists.h"

/**
 * print_list - prints all elements in singly linked list
 * @h: pointer to the singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;
	list_t *ptr = (list_t *)h;
	unsigned int i;

	count = 0;

	while (ptr != NULL)
	{
		for (i = 0; i < ptr->len; i++)
			_putchar(ptr->str[i]);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
