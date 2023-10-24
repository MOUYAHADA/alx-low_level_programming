#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: head of the linked list
 * @n: element be added
 * Return: the address of new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new = malloc(sizeof(listint_t *));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = current;
	*head = new;
	return (*head);
}
