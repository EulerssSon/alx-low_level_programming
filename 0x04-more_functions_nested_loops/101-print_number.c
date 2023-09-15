#include "main.h"

/**
 * print_number - function to print a number
 * @n: the number to print
 * Return: Null void function
 * Description: print number of any didgits using chars
 */
void print_number(int n)
{
	unsigned int num1;

	if (n < 0)
	{
		num1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}

	_putchar((num1 % 10) + 48);
}
