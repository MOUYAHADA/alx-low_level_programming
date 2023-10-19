#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to the beginning of the list
 * @head: pointer to first node
 * @str: string for the new node
 * Return: the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *strCopy = strdup(str);
	list_t *new;
	unsigned int len;

	if (!strCopy || !head)
		return (NULL);

	new = malloc(sizeof(list_t));
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new->str = strCopy;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
