#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to first node
 * @str: string for the new node
 * Return: the address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *strCopy = strdup(str);
	list_t *new_node;
	unsigned int len;

	if (!strCopy)
	{
		free(strCopy);
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	new_node->str = strCopy;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
