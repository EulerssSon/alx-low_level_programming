#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 2772;
	char c;

	srand(time(NULL));
	while (sum > 122)
	{
		c = rand() % 100;
		printf("%c", c);
		sum -= c;
	}
	printf("%c", sum);

	return (0);
}

