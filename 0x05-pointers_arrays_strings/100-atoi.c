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
	int  sign = 1;

	while (!(*s >= '0' && *s <= '9'))
	{
		s++; /*escaping all non numbers*/
	}
	s--; /*going back to check the sigh*/
	if (*s == '-')
	{
		sign = -1;
	}
	s++; /*going back to the first number*/
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}
