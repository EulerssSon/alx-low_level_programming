#include "main.h"

/**
 * print_last_digit - a function to extract the last digit
 * @n: first operant to be extracted from
 *
 * Return: retun a if +ve (n%10) b if -ve return +ve then % 10
 * Description: get the num %10 and return it
 */

int print_last_digit(int n)
{
	int a = n % 10;
	int b = (n % 10) * -1;

	if (n >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}

