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
		_putchar(48);

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			multiplication = i * j;

			if (multiplication <= 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar((_putchar(multiplication / 10)) + 48);
			}
			_putchar((multiplication % 10) + 48);
		}
		putchar(10);
	}
}

