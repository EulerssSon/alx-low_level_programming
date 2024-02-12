#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given pos
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *traverse = *h;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (traverse->next == NULL)
		{
			return (NULL);
		}
		traverse = traverse->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = traverse;
	new_node->next = traverse->next;
	traverse->next = new_node;
	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	return (new_node);
}
