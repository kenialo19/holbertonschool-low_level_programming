#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t.
 * @head: pointer list.
 * @index:
 *
 * Return: succeeded.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *list;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{
		while (i < index - 1 && ptr != NULL)
		{
			ptr = ptr->next;
			i++;
		}
		 list = ptr->next->next;
		free(ptr->next);
		ptr->next = list;
	}
	return (1);
}
