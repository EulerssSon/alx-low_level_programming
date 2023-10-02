#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */

int main (int argc, char **argv)
{
	int sum = 0, i, j;
	int flag = 0;

	if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
	for (i = 1; i < argc; i++)
	{
		for(j = 0; argv[i][j] != 0; j++)
		{
			flag = 0;
			if (argv[i][j] >= 48 && argv[i][j] <=57)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

