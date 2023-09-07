#include <unistd.h>
#include <string.h>

/**
 * main -n main function
 *
 * Return: 1 for error
 *
 * Description: write to the file error
 */
int main()
{
	const char* message ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,message,strlen(message));
	return (1);
}
