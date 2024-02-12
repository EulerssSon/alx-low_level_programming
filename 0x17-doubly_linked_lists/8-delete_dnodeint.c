#include "lists.h"

/**
 * delete_dnodeint_at_index - del  node at index of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		else
		{
			*head = NULL;
		}
		free(current);
		current = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	current = NULL;
	return (1);
}
