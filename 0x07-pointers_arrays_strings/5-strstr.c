#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to beginning of needle in haystack or NULL if no match
 * Description: finds first occurence of the substring needle in the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len2 = 0;

	for (len2 = 0; needle[len2] != '\0'; len2++)
		;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == len2)
			return (haystack + i);
	}
}
