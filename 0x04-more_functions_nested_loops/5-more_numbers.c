#include "main.h"
/**
 * more_numbers - function to print num
 * Return: null
 * Description: we all hate betty + checket
 */

void more_numbers(void)
{
	int k;
	int j;
	int i;

	for (k = 1; k <= 10; k++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 0; j <= 4; j++)
		{
			_putchar(49);
			_putchar(j + '0');
		}
	}
}

