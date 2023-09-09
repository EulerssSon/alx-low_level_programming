# include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 *
 * Description: unique of 3 nums
*/
int main(void)
{
int x;
int y;
int z;
int e;

for (x = 0; x <= 9;  x++)
{
for (y = 0; y <= 9; y++)
{
for (z = x; z <= 9; z++)
{
if (z == x)
{
e = y + 1;
}
else
{
e = 0;
}
for (; e <= 9; e++)
{
putchar(x + 48);
putchar(y + 48);
putchar(' ');
putchar(z + 48);
putchar(e + 48);
if (!(x == 9 && y == 8 && z == 9 && e == 9))
putchar(',');
putchar(' ');
}
}
}
}
putchar(10);
return (0);
}
