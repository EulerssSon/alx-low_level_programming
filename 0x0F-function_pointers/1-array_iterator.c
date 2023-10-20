#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

