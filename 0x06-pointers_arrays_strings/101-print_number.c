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
	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		num = -1 * num;
	}
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}

