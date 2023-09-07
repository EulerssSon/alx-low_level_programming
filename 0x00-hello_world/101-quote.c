#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints a message to the standard error stream
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));

	return (1);
}

