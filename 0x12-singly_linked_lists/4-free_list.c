#include "lists.h"

/**
 * free_list - frees a list_t list singly
 * @head: pointer to the head a list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;/*temporal pointer to free the nodes*/

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head; /* storing */
		head = head->next;
		free(temp->str);
		free(temp);
	}
}


