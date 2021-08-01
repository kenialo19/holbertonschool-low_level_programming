#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: list.
 * @str: string.
 *
 * Return: pointer.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *lts;

	int i = 0;

	ptr = malloc(sizeof(list_t));
	lts = *head;
	if (!ptr)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	ptr->str = strdup(str);
	ptr->len = i;
	if (lts == NULL)
	{
		*(head) = ptr;
		return (ptr);
	}
	while (lts->next != NULL)
	{
		lts = lts->next;
	}
	lts->next = ptr;
	return (ptr);
}
