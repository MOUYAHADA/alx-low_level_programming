#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);

			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next; }
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(new);
		return (0); }
	new->value = strdup(value);

	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0); }
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
