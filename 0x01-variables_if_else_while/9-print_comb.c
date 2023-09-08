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
int alphabets = 48;
while (alphabets <= 57)
{
putchar(alphabets);
if (alphabets != 57)
{
putchar(',');
putchar(' ');
}
alphabets++;
}
putchar(10);
return (0);
}
