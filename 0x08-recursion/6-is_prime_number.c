#include "main.h"

/**
 * PrimeCountCheck - check if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */

/*like a looop*/
int PrimeCountCheck(int n, int i)
{
	if (n % i == 0)/*question*/
		return (0);
	if (i > n / 2)/*condition*/
		return (1);
	return (PrimeCountCheck(n, i + 1)); /*increment*/
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (PrimeCountCheck(n, 2));
}

