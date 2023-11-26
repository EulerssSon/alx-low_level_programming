#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j = 0;

	for (i = n ^ m; i != 0; i = i >> 1)
	{
		if ((i & 1) == 1)
			j++;
	}
	return (j);
}

