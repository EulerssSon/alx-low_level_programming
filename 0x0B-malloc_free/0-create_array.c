#include "main.h"

/**
 * create_array - creates an array of chars, and sets it with a specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
