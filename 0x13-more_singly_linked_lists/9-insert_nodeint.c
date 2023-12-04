#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a int data;
 * @head: pointer to the first element of the list poniter to pointer
 * @n: integer to add to the list
 *
 * Return: address of the new element, or NULL if it failed
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 *         if it is not possible to add the new node at index idx,
 *         do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));
	if (*head == NULL)
		return (NULL);

	return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
}

