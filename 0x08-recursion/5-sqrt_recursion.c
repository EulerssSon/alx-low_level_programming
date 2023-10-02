#include "main.h"

/**
 * helper - helps find the square root of a number
 * @n: number to find the square root of
 * @i: iterator
 *
 * Return: the square root of n
 */

int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
