#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t fd, readSize;
	char buf[1024 * 8];


	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == (unsigned long int)-1)
		return (0);

	readSize = read(fd, buf, letters);
	if (readSize == (unsigned long int)-1)
		return (0);
	readSize = write(STDOUT_FILENO, buf, letters);
	if (readSize == (unsigned long int)-1)
		return (0);

	close(fd);

	return (readSize);
}

