#include "main.h"

/**
 * print_line - function to print_line
 * @n: n for number of lines
 *
 * Return: Null void
 * Description: print lines of dashess if n >= 0 depending on n
 */

void print_line(int n)
{
	if (n >= 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
	}
	_putchar(10);
}
