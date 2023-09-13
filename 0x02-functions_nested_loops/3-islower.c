#include "main.h"

/**
 * _islower - an int function takes an int as an arg
 * @c: a char to be checked
 *
 * Description: chech if the letter is small or captial
 * Return: 1 is true 0 on false
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
