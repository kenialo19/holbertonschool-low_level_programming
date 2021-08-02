#include "lists.h"

/**
* free_listint2 -  frees a listint_t list.
* @head: Pointer list.
*
* Return: void.
*/

void free_listint2(listint_t **head)
{
	listint_t *s;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		s = (*head)->next;
		free(*head);
		*head = s;
	}
}
