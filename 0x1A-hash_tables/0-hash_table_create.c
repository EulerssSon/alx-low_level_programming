#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = array;
	for (i = 0; i < size; ++i)
	{
		table->array[i] = NULL;
	}
	return (table);
}
