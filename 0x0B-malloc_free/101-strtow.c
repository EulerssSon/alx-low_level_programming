#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int slen = 0, i, j = 0, k, words, WordLen, start_index[1000], end_index[1000];
	char **NewStr;

	for (i = 0; str[i] != 0; i++)
		slen++;
	if (slen == 0 || str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] != ' ')
		{
			start_index[j] = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			end_index[j++] = i - 1;
			words++;
		}
	}
	NewStr = (char **) malloc(sizeof(char *) * (words + 1));
	if (NewStr == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		WordLen = end_index[i] - start_index[i] + 2;/* to add a null char*/
		NewStr[i] = (char *) malloc(sizeof(char) * WordLen);
		if (NewStr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(NewStr[i]);
			free(NewStr);
			return (NULL);
		}
		k = start_index[i];
		for (j = 0; j < WordLen - 1; j++)
			NewStr[i][j] = str[k++];
		NewStr[i][j] = '\0';
	}
	NewStr[i] = NULL;
	return (NewStr);
}

