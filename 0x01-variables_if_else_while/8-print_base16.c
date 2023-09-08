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
char nums = 'a';
while (alphabets <= 57)
{
putchar(alphabets);
alphabets++;
}
while(nums <= 'f')
{
putchar(nums++);
}
putchar(10);
return (0);
}
