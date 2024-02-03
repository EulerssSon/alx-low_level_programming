#include "hash_tables.h"

/**
 * free_set_to_null - free the memory and set the pointer to NULL
 * @ptr: pointer to the pointer
 * Return: 0
 */
int free_set_to_null(void **ptr)
{
	if (ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
	return (0);
}
/**
 * free_node - free the memory of the node and set the pointer to NULL
 * @node: pointer to the pointer
 * Return: 0
 */
int free_node(hash_node_t **node)
{
	if (node != NULL)
	{
		free_set_to_null((void **)&(*node)->key);
		free_set_to_null((void **)&(*node)->value);
		free(*node);
		*node = NULL;
	}
	return (0);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size_key = strlen(key), index = 0;
	hash_node_t *array = NULL, *new_node = NULL, *temp = NULL;

	if (ht == NULL || key == NULL || value == NULL || size_key == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	array = ht->array[index];/* get the array at the index */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
		return (free_node(&new_node));
	if (array == NULL)/* if the array is empty add the new node */
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
		return (1);
	}
	temp = array;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (strcmp(temp->value, value) != 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
					return (free_node(&new_node));
				return (1);
			}
		}
		temp = temp->next;
	}
	new_node->next = ht->array[index];/*add the new node to the array*/
	ht->array[index] = new_node;
	return (1);
}
