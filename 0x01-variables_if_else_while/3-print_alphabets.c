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
int i = 65;
while (alphabets <= 'Z')
{

printf("%c", putchar(alphabets));
alphabets++;
}
for (; i <= 90; i++)
{
putchar(i);
}
return (0);
}
