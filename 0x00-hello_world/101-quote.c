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
	const char *message_part1 = "and that piece of art is useful\" - ";
	const char *message_part2 = "Dora Korpar, 2015-10-19\n";

	write(2, message_part1, strlen(message_part1));
	write(2, message_part2, strlen(message_part2));

	return (1);
}

