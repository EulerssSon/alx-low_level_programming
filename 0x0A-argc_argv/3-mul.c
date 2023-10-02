#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char **argv)
{
	long int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%ld\n", result);
	return (0);
}
