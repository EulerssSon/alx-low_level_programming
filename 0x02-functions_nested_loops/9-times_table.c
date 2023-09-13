#include "main.h"

/**
 * times_table - print time table
 * Return: null just printing
 * Description: print the multi table form 0 - 9 c under colums
 */

void times_table(void)
{
	int i;
	int multiplication;
	int j;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			multiplication = i * j;

			if ((multiplication / 10) == 0)
			{
				if (j != 0)
				_putchar(',');
				_putchar(multiplication + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(multiplication / 10 + 48);
				_putchar((multiplication % 10) + 48);
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

