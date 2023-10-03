#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **rows;

	if (height <= 0 || width <= 0)
		return (NULL);

	rows = (int **) malloc(sizeof(int *) * height);

	if (rows == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		rows[i] = (int *) malloc(sizeof(int) * width);
		if (rows[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			rows[i][j] = 0;
	return (rows);
}

