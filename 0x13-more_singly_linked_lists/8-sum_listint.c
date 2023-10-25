#include "lists.h"

/**
 * sum_listint - calculates the sum of all elements in a listint
 * @head: pointer to list head
 * Return: sum of elements or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
