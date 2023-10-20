#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t (data).
 * @h: pointer to the head of the list
 * Return: number of elements in the signly linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}

