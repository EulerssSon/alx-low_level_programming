#include "main.h"

/**
 * cents - calculates the minimum number of coins to make change for money
 * @num: amount of money
 * Return: minimum number of coins
 */

int cents(int num)
{
	if (num <= 0)
		return (0);
	if (num >= 25)
		return (num / 25 + cents(num % 25));
	if (num >= 10)
		return (num / 10 + cents(num % 10));
	if (num >= 5)
		return (num / 5 + cents(num % 5));
	if (num >= 2)
		return (num / 2 + cents(num % 2));
	if (num == 1)
		return (num / 1 + cents(num % 1));
	else
		return (0);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", cents(num));
	return (0);
}
