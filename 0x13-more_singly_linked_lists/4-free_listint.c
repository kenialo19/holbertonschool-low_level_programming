#include "lists.h"

/**
* free_listint - Function frees a listint_t list.
* @head: Pointer list.
*
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *op;

	while (head)
	{
		op = head;
		head = op->next;
		free(op);
	}

}
