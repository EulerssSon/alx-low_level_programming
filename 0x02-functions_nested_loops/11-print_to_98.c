#include "main.h"

/**
 * print_to_98 - a function to print a number from or to 98 included
 *
 * @n: the number to print to or from relativerly to 98
 *
 * Return: Null void prints only
 *
 * Description: print number from or to the 98
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d", 98);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d", 98);
	}
	}

