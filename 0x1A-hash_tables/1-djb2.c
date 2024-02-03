#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string to hash
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int x = 5381;
	unsigned long int i = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		x = x * 33 + str[i];
	}
	return (x);
}
