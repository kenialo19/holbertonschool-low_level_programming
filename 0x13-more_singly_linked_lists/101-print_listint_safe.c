#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer list.
 *
 * Return: elements list.
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (98);
	}

	while (head->next != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
		break;
	}
	return (i);
}
