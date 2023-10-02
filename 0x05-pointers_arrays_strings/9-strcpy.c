#include "stdio.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer
 * @src: pointer to the string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *savior = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (savior);
}
