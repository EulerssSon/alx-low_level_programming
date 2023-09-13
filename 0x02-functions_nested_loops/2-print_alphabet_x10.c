#include "main.h"
/**
  * print_alphabet_x10- print_alphabet function
  *
  * Return: alphabets 10 times
  *
  * Description: print alphabets
 */

void print_alphabet_x10(void)
{
int ch;
int i;

for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar(10);
}
return;
}
