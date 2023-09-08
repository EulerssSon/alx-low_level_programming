#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 *
 * Description: parint alphabers
 */
int main(void)
{
char alphabets = 'z';
while (alphabets >= 'a')
{
putchar(alphabets--);
}
putchar(10);
return (0);
}
