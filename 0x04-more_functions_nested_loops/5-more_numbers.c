#include "main.h"

/**
  * more_numbers - function
  * Return: null
  * Description: i hate betty
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
