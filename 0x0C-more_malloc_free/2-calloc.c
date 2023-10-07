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
	unsigned int *arr, i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size *  nmemb; i++)
		arr[i] = 0;
	return (arr);
}

