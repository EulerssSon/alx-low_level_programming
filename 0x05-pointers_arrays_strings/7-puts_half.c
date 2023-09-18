#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0, i;

	while (*(str + length) != '\0')
		length++;
	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length + 1) / 2;
	for (; i < length; i++)
		_putchar(*(str + i));
	_putchar(10);
}
