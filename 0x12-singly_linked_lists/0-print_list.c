#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list using current.
 * @h: pointer to the list head.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		counter++;
	}

	return (counter);
}

