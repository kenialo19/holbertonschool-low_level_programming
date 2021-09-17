#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index.
 * of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of a list
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *list;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (!ptr->next && !index)
	{
		free(ptr);
		*head = NULL;
		return (1);
	}
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
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		list = ptr->next->next;
		ptr->next->next->prev = ptr;
		ptr->next->next = NULL;
		free(ptr->next);
		ptr->next = list;
	}
	return (1);
}
