#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, i = 0;

	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (length1 < length2)
		return (s1[0] - s2[0]);
	else if (length1 > length2)
		return (s1[0] - s2[0]);
	while (i < length1)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else
				return (s2[i] - s1[i]);
		}
	}
	return (0);
}

