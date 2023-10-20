#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a linked list
 * @head: pointer to head of the list
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
	head = NULL;
}
