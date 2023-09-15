#include <stdio.h>
#include "main.h"

int power(int base, int exp);
/**
 * print_number - function to print a number
 * @n: the number to print
 * Return: Null void function
 * Description: print number of any didgits using chars
 */

void print_number(int n)
{
	int digits = 0;
	int tmp = 0;
	int rev = 0;
	int k = 0;

	if (n < 0)
	{
		n *= -1;
		k = 1;
	}
	tmp = n;
	if (tmp == 0)
		_putchar(48);

	while (tmp > 0)
	{
		tmp /= 10;
		digits++;
	}
	while (n > 0)
	{
		rev += (n % 10) * power(10, digits - 1);
		n /= 10;
		digits--;
	}
	if (k == 1)
		_putchar('-');
	while (rev > 0)
	{
		_putchar('0' + rev % 10);
		rev /= 10;
	}
}

/**
 * power - function that print power of a num
 * @base: base of the num
 * @exp: repetion
 *
 * Description: power of a num
 * Return: powe the number repted mulyi
 */

int power(int base, int exp)
{
	int pow = 1, i;

	if (exp == 0)
		return (1);
	for (i = 1; i <= exp; i++)
	{
		pow *= base;
	}
	return (pow);
}
