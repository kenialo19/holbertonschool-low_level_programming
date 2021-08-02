#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t.
 * @h: list pointer.
 *
 * Return: list elements
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
