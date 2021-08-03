#include "lists.h"

/**
 * *insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer list.
 * @idx: list of the new node.
 * @n: numbers to the elements
 *
 * Return: NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *lts, *aux = *head;
	unsigned int i = 1;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	while (aux != NULL)
	{

		if (idx == i)
		{
			lts = aux->next;
			ptr->next = lts;
			aux->next = ptr;
			return (aux);
		}
		aux = aux->next;
		i++;
	}
	return (NULL);
}
