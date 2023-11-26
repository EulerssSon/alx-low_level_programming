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
	int x = n ^ m;
	int count = 0;

	while (x > 0)
	{
		x = x & (x - 1);
		count++;
	}
	return (count);
}

