#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a linked list
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current;

	if (h == NULL)
		return (0);
	current = (listint_t *)h;

	while (current->next != NULL)
	{
		printf("%d\n",  current->n);
		count++;
		current = current->next;
	}
	if (current != NULL)
	{
		count++;
		printf("%d\n",  current->n);
	}

	return (count);
}
