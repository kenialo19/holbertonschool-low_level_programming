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
	ptr->prev = NULL;

	if (*h == NULL)
	{
		*h = ptr;
		return (ptr);
	}
	if (idx == 0)
	{
		ptr->next = *h;
		(*h)->prev = ptr;
		*h = ptr;
		return (ptr);
	}

	while (aux != NULL)
	{

		if (i == (idx))
		{
			/*lts = aux->prev;
			aux->prev = ptr;
			ptr->prev = lts;
			ptr->next = aux;
			lts->next = ptr;
			return (ptr);*/
			lts = aux->next;
			ptr->next = lts;
			lts->prev = ptr;
			ptr->prev = aux;
			aux->next = ptr;
			return (ptr);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
