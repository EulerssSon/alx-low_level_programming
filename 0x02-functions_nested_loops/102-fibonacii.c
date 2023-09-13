#include <stdio.h>

/**
 * main - main function
 * Return: 0 on sucess
 * Description: sum all who are divisble by 3 or 5 under 1024
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
		sum += 1;
	}
	}
	return (0);
}

