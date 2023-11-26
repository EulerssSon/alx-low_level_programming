#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask < n)
	{
		mask = mask << 1;
		i++;
	}
	if (mask != n)
		mask = mask >> 1;
	while (mask != 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask = mask >> 1;
	}
}

