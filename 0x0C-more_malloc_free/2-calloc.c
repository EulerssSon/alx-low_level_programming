#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	filler = ptr;

	for (i = 0; i < nmemb * size; i++)
		filler[i] = 0;

	return (ptr);
}

