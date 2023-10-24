#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of  list.
 * @head: pointer to the first element of the list the (head)
 * @n: const integer to add to the list
 *
 * Return: address of the new element, or NULL at failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_ptr = *head, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (temp_ptr == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (temp_ptr->next != NULL)
			temp_ptr = temp_ptr->next;
		temp_ptr->next = new_node;
	}

	return (new_node);
}

