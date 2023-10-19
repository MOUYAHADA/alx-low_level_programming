#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements in singly linked list
 * @h: pointer to the singly linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;
	list_t *ptr = (list_t *)h;

	count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
