#include "lists.h"

/**
 * print_list -prints all the elements of a list_t list.
 * @h: list pointer.
 *
 * Return: size_t.
 */

size_t print_list(const list_t *h)
{
	const list_t *b = NULL;
	char *k;
	int j = 0;
	int i = 0;

	b = h;
	while (b)
	{
		k = b->str;
		j = b->len;
		if (k == NULL)
		{
			k = "(nil)";
		}
		printf("[%i] %s\n", j, k);
		i++;
		b = b->next;
	}
	return (i);
}
