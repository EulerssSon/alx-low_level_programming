#include "lists.h"

/**
 * free_listint - frees list;
 * @head: pointer to the head of the list;
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}

