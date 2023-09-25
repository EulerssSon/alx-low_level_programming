#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 * Description: which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, occ = 0;

	for (i = 0; *(s + i) != 0 && *(s + i) != ' '; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				occ++;
				break;
			}
		}
	}
	return (occ);
}

