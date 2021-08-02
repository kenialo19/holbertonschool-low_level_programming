#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer list
 * @n: integer to the list
 *
 * Return: the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *lts;

	ptr = malloc(sizeof(listint_t));
	lts = *head;

	if (!ptr)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (lts->next != NULL)
	{
		lts = lts->next;
	}
	lts->next = ptr;

	return (ptr);
}
