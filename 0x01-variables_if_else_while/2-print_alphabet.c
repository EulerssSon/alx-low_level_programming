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
char alphabets = 'a';
while (alphabets <= 'z')
{
putchar(alphabets++);
}
putchar(10);
return (0);
}
