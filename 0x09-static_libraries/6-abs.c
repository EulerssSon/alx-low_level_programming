#include "main.h"

/**
 * _abs - function to return absolute value
 * @n: first opernad n  the number to be checked
 *
 * Description: if number positive
 * if nev multiple by -1
 * Return: n
 * if positve else return -1 * n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	return (-1 * n);
}
