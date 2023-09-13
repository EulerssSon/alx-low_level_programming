#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Description: This function checks whether the
 *              either lowercase or uppercase. It uthe character
 *              falls within the range of lowercase or uppercase alphabets.
 *
 * Return: 1 if the character is an alphabetic character, otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
else
	return (0);
}

