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

for (x = 0; x <= 9;  x++)
{
for (y = x+1 ; y <= 9; y++)
{
for (z = y+1 ; z <= 9; z++)
{
putchar(48 + x);
putchar(48 + y);
putchar(48 + z);
if (!(x == 7 && y == 8 && z == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar(10);
return (0);
}
