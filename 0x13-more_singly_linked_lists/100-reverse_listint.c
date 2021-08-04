#include "lists.h"

/**
 *  *reverse_listint -  reverses a listint_t linked list.
 * @head: pointer list
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *list = NULL, *re = *head;

	while (re != NULL)
	{
		ptr = re->next;
		re->next = list;

		list = re;
		re = ptr;
	}
	*head = list;
	return (list);
}
