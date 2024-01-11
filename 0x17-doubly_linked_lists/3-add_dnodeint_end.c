#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of doubly linked list
 *
 * @head: pointer to the head of the list
 * @n: number
 *
 * Return: address of new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = NULL;

	if (current && current->next)
		while (current->next)
			current = current->next;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = NULL;
	if (current)
		current->next = new;

	*head = new;
	return (*head);
}
