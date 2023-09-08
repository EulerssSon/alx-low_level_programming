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
while (alphabets <= 'z')
{
printf("%c", alphabets);
alphabets++;
}
for (; i <= 95; i++)
{
printf("%c", i);
}
return (0);
}
