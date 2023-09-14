#include "main.h"
/**
 * print_most_numbers - function to print_numbers till 14
 *
 * Return: Null void function
 *
 * Description: print_numbers form 0 to 14
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	int j = 1;

	for (; j <= 4; j++)
	{
		_putchar(49);
		_putchar(j + '0');
	}
	_putchar(10);
}
