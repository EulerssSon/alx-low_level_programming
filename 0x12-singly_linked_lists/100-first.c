#include "lists.h"

/**
 * print_before_main - prints a string before main is executed by the program!!
 *
 * Return: void
 */

void print_before_main(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}



