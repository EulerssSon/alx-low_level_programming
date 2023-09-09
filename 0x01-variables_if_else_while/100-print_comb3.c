#include <stdio.h>
#include <string.h>

/**
 * main - main function
 *
 * Description: print unique from 0-99, without trailing comma and space
 * Return: 0 on success
 */
int main(void)
{
    int x = 48;

    while (x <= 57)
    {
        int y = 48;

        while (y <= 57)
        {
            if (x == y)
            {
                y++;
                continue;
            }
            if ((((char)x * 10 + (char)y) - ((char)y * 10 + (char)x)) / 9 > 0)
            {
                y++;
                continue;
            }
            putchar(x);
            putchar(y);
            /* Check if it's the last pair of numbers before printing comma and space */
            if (!(x == 56 && y == 57))
            {
                putchar(',');
                putchar(' ');
            }
            y++;
        }
        x++;
    }
    return (0);
}
