#include "main.h"
#define NULL ((void *)0)

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int sum = 0, i = 0, j = 0;

	if (b == NULL)
		return (0);
	i = _strlen(b) - 1;

	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * (1 << j);
		j++;
	}
	return (sum);
}

