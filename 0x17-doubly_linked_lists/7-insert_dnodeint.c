#include "lists.h"

/**
 * *insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to a pointer to the head of a list
 * @idx: the index of the list where the new node should be added.
 * @n: integer to be add to the list.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *lts, *aux = *h;
	unsigned int i = 0;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	if (idx == 0)
	{
		ptr->next = *h;
		*h = ptr;
		return (ptr);
	}

	while (aux != NULL)
	{

		if (i == (idx - 1))
		{

			lts = aux->next;
			ptr->next = lts;
			aux->next = ptr;
			return (ptr);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
