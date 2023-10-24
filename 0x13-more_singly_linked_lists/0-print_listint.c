#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;
	const listint_t *tmp = h;

	if (tmp == NULL)
		return  (0);

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		counter++;
		tmp = tmp->next;
	}

	return (counter);
}

