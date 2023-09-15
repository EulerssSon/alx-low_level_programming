#include "main.h"

 /**
 * more_numbers - function to print_numbers till 14  times
 *
 * Return: Null void function
 *
 * Description: print_numbers form 0 to 14 x 10
 */

void more_numbers(void)
{
int k;
int j;
for (k = 1; k <= 10; k++)
{
int i;
for (i = 48; i <= 57; i++)
{
_putchar(i);
}
for (j = 0; j <= 4; j++)
{
_putchar(49);
_putchar(j + '0');
}
_putchar(10);
}
}
