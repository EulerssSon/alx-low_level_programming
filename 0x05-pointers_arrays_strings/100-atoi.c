#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	unsigned int n = 0;
	int  sign = 0;

	while (!(*s >= '0' && *s <= '9') && *s != '\0')
	{
	if (*s == '-')
	{
		sign++;
	}
	s++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}
