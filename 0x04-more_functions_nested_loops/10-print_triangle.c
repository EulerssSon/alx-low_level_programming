#include "main.h"

/**
 * print_triangle - function to print_triangle of hashes
 *
 * @size: operant to knwo the size of the triangle
 * Return: Null void function
 * Description: print_triangle right angle in right  accroding to its size
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i - 1; j >= 0; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}

