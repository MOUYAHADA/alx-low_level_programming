#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees all nodes of a linked list
 *
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
