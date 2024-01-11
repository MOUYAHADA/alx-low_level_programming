#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: number
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = NULL;

	if (current && current->prev)
		while (current->prev)
			current = current->prev;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = current;
	if (current)
		current->prev = new;

	*head = new;
	return (*head);
}
