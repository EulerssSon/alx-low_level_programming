#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}

