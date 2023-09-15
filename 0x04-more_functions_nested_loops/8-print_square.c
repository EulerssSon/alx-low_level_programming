#include "main.h"

/**
 * print_square - print sqaure of *
 * @size: size of the square
 * Return: null void
 * Description: nested for n n
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

