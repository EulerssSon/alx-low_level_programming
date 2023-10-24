#include "lists.h"
/**
 * pop_listint - deletes the head node of the list.
 * @head: pointer to the head of the list
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to the first node.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}

	return (delete_nodeint_at_index(&(*head)->next, index - 1));

}

