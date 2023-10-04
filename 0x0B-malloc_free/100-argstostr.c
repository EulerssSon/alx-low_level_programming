#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL if error
 *
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int length = 0;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(av[i]);
			free(av);
			return (NULL);
		}
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	arr = malloc(sizeof(char) * (length + ac + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			arr[k] = av[i][j];
		arr[k++] = '\n';
	}
	arr[k] = '\0';

	return (arr);
}

