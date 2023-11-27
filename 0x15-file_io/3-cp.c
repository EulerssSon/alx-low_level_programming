#include "main.h"

/**
 * EXIT98 - exits with code 98
 * @file: file name
 *
 * Return: void
 */
void EXIT98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
 * EXIT99 - exits with code 99
 * @file: file name
 *
 * Return: void
 */
void EXIT99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, c1, c2;
	char copy[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		EXIT98(argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		EXIT99(argv[2]);
	r = read(fd_from, copy, 1024);
	if (r == -1)
		EXIT98(argv[1]);
	while (r > 0)
	{
		c1 = write(fd_to, copy, r);
		if (c1 == -1)
			EXIT99(argv[2]);
		r = read(fd_from, copy, 1024);
		if (r == -1)
			EXIT98(argv[1]);
	}
	c2 = close(fd_from);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	c2 = close(fd_to);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

