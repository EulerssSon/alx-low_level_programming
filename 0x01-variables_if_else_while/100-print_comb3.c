#include <stdio.h>
#include <string.h>

/**
 * main - main function
 *
 * Return: 0 on success
 *
 * Description: print unique numbers from 0-99
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
            if (((char)x * 10 + (char)y) - ((char)y * 10 + (char)x) / 9 > 0)
            {
                y++;
                continue;
            }
            if (x == 56 && y == 57)
            {
                putchar(x);
                putchar(y++);
            }
            else
            {
                putchar(x);
                putchar(y++);
                putchar(',');
                putchar(' ');
            }
        }
        x++;
    }
    return (0);
}

