/**
 * delte_node_at_begging - deletes the node at index of a linked list.
 * @head: pointer to the first node.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

void delte_node_at_begging(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
}

/**
 * delete_nodeint_at_index- deletes the node at index of a linked list.
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
		delte_node_at_begging(head);
		return (1);
	}

	return (delete_nodeint_at_index(&(*head)->next, index - 1));
}
