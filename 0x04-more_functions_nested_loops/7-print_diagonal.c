#include "main.h"

/**
 * print_diagonal - function to print_diagonal
 * @n: n for number of lines
 *
 * Return: Null void
 * Description: print lines of dashess if n >= 0 depending on n
 */

void print_diagonal(int n)
{
		int i;
		int j;

	if (n > 0)
	{

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar(10);
}

