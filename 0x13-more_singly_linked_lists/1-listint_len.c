#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t.
 * @h: list pointer.
 *
 * Return: elements to the list:
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
