#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a linked list
 * @head: *pointer to the head of the list
 *
 *Return: the deleted value or 0 on error
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
