#include "main.h"

/**
 * jack_bauer - print every single combination inna time from 0000 2359
 *
 * Return: the combination of the time
 *
 * Description: 4 nested loops to print the time
 */

void jack_bauer(void)
{
	for (int i = 48; i <= 50; i++)
	{
		for (int j = 48; j <= 57; j++)
		{
			for (int k = 48; k <= 53; k++)
			{
				for (int z = 48; z <= 57; z++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(z);
					_putchar(10);
				}
			}
		}
	}
}

