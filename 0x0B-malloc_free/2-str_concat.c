#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *concat;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	concat = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		concat[len1] = s1[len1];
	if (str == NULL)
		s2 = "";
	for (len2 = 0; s2[len2] != '\0'; len2++)
		concat[len1 + len2] = s2[len2];
	concat[len1 + len2] = '\0';

	return (concat);
}

