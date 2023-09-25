#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum_main = 0, sum_sec = 0, i, j;

	j = size - 1;
	for (i = 0; i < size * size; i += size)
	{
		sum_main += a[i];
		sum_sec += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum_main, sum_sec);
}
