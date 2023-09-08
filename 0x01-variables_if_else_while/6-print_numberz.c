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
while (alphabets < 58)
{
putchar(alphabets);
alphabets++;
}
putchar(10);
return (0);
}
