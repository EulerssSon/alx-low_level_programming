#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int S2Len = 0, S1len = 0, i = 0;
	char *StrNCat;

	for (S1len = 0; s1[S1len] != '\0'; S1len++)
		;
	for (S2Len = 0; s2[S2Len] != '\0'; S2Len++)
		;
	StrNCat = malloc(sizeof(char) * (S1len + n + 1));
	if (StrNCat == NULL || S1len ==  0)
		return (NULL);
	if (n >= S2Len)
		n = S2Len;
	for (i = 0; i < S1len; i++)
		StrNCat[i] = s1[i];
	for (i = 0; i < n; i++)
		StrNCat[i + S1len] = s2[i];
	StrNCat[S1len + n] = '\0';
	return (StrNCat);
}

