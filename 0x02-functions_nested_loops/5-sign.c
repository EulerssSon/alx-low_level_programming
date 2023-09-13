#include "main.h"

/**
 * print_sign - take an int and give an int
 * @n: first opernad to be ckecked
 *
 * Description: num + word if n >0 0 0 if 0 -1 - n<0
 * Return: 1 , 0 , -1 , + , 0 ,-
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (48);
	}
}
