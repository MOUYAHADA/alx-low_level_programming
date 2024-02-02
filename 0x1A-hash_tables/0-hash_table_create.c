#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: table size
 *
 * Return: pointer to the new created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	unsigned int i;

	if (!size)
		return (NULL);

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
