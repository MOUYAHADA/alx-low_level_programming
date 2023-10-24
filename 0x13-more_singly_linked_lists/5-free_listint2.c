#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a singly linked list and sets head to NULL
 *
 * @head: pointer to pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if ((*head)->next != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
