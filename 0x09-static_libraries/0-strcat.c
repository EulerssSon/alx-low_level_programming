#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to append
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
