#include "main.h"
/**
 * main - main fundtion
 * Return: 0 on sucess
 * Description: print_putchar
 */

int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
	_putchar(str[i]);
}
putchar('\n');
return (0);
}
