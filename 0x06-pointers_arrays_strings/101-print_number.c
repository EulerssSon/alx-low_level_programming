#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int rev = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}

