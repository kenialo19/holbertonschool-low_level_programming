#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer list.
 *
 * Return: number to the nodos.
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);

	ptr = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = ptr;

	return (i);
}
