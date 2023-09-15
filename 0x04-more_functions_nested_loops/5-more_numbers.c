#include "main.h"

/**
 * more_numbers - print more numbers
 * Return: null void
 * Description: print 10 times from 0 - 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(49);
			_putchar (j % 10 + '0');
		}
		_putchar(10);
	}
}

