#include "main.h"

/**
 * _isdigit - function to check if the letter is digit or not
 * @c: first opeant the char to be checked
 * Return: 1 or 0
 * Description: 1 means sucess the char is a num 0 is the else one
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}

