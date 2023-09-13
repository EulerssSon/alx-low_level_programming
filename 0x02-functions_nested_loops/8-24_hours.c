#include "main.h"

/**
 * jack_bauer - pr every single combination inna time from 0000 2359
 *
 * Return: the combination of the time
 *
 * Description: 4 nested loops to pr the time
 */

void jack_bauer(void)
{
	int i;

	for (i = 48; i <= 50; i++)
	{
		int j;

		for (j = 48; j <= 57; j++)
		{
			int k;

			for (k = 48; k <= 53; k++)
			{
				int z;

				for (z = 48; z <= 57; z++)
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

