#include "main.h"
/**
 * print_most_numbers - function to print_numbers expcet 2 4
 *
 * Return: Null void function
 *
 * Description: print_numbers form 0 to 9 expcet 2 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(10);
}
