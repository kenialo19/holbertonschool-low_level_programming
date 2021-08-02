#include "lists.h"

/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: pointer list
 * @n: integer to the list
 * 
 * Return: new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		return (0);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	
	return (ptr);
}
