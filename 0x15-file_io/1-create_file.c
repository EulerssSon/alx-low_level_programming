#include "main.h"

/**
 * _str_len - returns the length of a string
 * @str: string to be checked
 *
 * Return: length of the string
 */
int _str_len(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		len = _str_len(text_content);
		write(fd, text_content, len);
		if (write < 0)
			return (-1);
	}
	close(fd);
	return (1);
}

