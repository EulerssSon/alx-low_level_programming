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
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		len = _str_len(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		if (*text_content == '\0')
			return (1);
		wr = write(fd, text_content, len);
		if (wr < 0)
			return (-1);
	}
		close(fd);
		return (1);
}
