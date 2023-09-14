#include "main.h"

/**
 * _isupper - function to check if the letter is upper or lower case
 * @c: first opeant the char to be checked
 *
 * Return: 1 or 0
 * Description: 1 means sucess the char is upper 0 is the else one
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

